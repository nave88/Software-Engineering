#include "headers.h"
#include <stdio.h>
#include <curl/curl.h>
//#include <curl/types.h>
#include <curl/easy.h>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <sstream>

//in the future, the downloadCSV function will take args about the
//stocks and different types of data required
//for now it wil just download 3 data types about an apple stock

//standard write data function
size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

Money getPrice(Stock stock, QDate date) {
    CURL *pCurl;
    FILE *fptr;
    CURLcode codes;

	//temporary stock & date selection
	std::string stockName = stock.getTickerSymbol();
	int dated = date.day();
	int datem = date.month();
	int datey = date.year();

	//convert date to string format
	datem=datem-1;
	
	stringstream datedsStream;
	datedsStream << dated;
	
	stringstream datemsStream;
	datemsStream << datem;
	
	stringstream dateysStream;
	dateysStream << datey;
	
	std::string dateds = datedsStream.str();
	std::string datems = datemsStream.str();
	std::string dateys = dateysStream.str();

	//create url
	//format is yahoo base + stock + date start + date end (date format, m/d/y)
    std::string url = "ichart.finance.yahoo.com/table.csv?s=";
	url = url+stockName+"&a="+datems+"&b="+dateds+"&c="+dateys+"&d="+datems+"&e="+dateds+"&f="+dateys+"&g=d";

	//convert to char * for libcurl
	char *charUrl = new char[url.length()+1];
	std::strcpy(charUrl, url.c_str());

	//LIBCURL STUFF

	//output file
    char outfilename[] = "data.csv";

	//easy handle
	pCurl = curl_easy_init();
    if (pCurl) {
        CURLcode res;
        fptr = fopen(outfilename,"wb");
		//set url to download from
        curl_easy_setopt(pCurl, CURLOPT_URL, charUrl);
		//pass the data to the write_data() function
        curl_easy_setopt(pCurl, CURLOPT_WRITEFUNCTION, write_data);
		//write the data
        curl_easy_setopt(pCurl, CURLOPT_WRITEDATA, fptr);
		//check for sucess and cleanup
        res = curl_easy_perform(pCurl);
        curl_easy_cleanup(pCurl);
        fclose(fptr);
    }

	//parse CSV
	std::string line;
	std::ifstream myfile ("./data.csv");

	//get the second line
	if(myfile.is_open())
	{
		std::getline (myfile,line);
		std::getline (myfile,line);
		myfile.close();
	}
	else{
		std::cout<<"Error opening file\n";
	}

	//locate the correct column
	std::stringstream ss(line);
	std::string output;
	
	int i = 0;
	//i indicates the column you want, 0 = first, 1 = second, etc
	while(std::getline(ss,output,',') && i<4){
		//iterates through blocks of data
		++i;
	}

	printf("%s\n", output.c_str());

	delete charUrl;
	return Money(output);
}
