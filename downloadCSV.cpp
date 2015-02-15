#include <stdio.h>
#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>
#include <string>

//in the future, the downloadCSV function will take args about the 
//stocks and different types of data required
//for now it wil just download 3 data types about an apple stock

//standard write data function
size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

bool downloadCSV(/*args*/) {
    CURL *pCurl;
    FILE *fptr;
    CURLcode codes;
	
	//a default url for now, will have to make this different for each request
    char *url = "http://finance.yahoo.com/d/quotes.csv?s=AAPL&f=nab";
	//output file
    char *outfilename = "C:\\data.csv";
    
	//easy handle
	pCurl = curl_easy_init();
    if (pCurl) {
        fptr = fopen(outfilename,"wb");
		//set url to download from
        curl_easy_setopt(pCurl, CURLOPT_URL, url);
		//pass the data to the write_data() function
        curl_easy_setopt(pCurl, CURLOPT_WRITEFUNCTION, write_data);
		//write the data
        curl_easy_setopt(pCurl, CURLOPT_WRITEDATA, fptr);
		//check for sucess and cleanup
        res = curl_easy_perform(pCurl);
        curl_easy_cleanup(pCurl);
        fclose(fptr);
    }
}
