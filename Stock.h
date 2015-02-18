#ifndef STOCK
#define STOCK

#include <iostream>
#include <string>
using namespace std;

//stock class for now is just a string of stock's ticker symbol


class Stock
{
	std::string tickerSymbol;
	
	public:
	Stock(const string tickerSymbol);
	Stock(const char * tickerSymbol);
		
	std::string getTickerSymbol() const;
};

ostream &operator<<(ostream &os, Stock s);
bool operator<(const Stock &s1, const Stock &s2);

#endif
