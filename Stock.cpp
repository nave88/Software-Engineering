#include "Stock.h"
#include <string>
#include <iostream>
using namespace std;


Stock::Stock(std::string tickerSymbol) : tickerSymbol(tickerSymbol) {}
Stock::Stock(const char * tickerSymbol) : tickerSymbol(string(tickerSymbol)) {}

std::string Stock::getTickerSymbol() const
{
	return this->tickerSymbol;
}

ostream &operator<<(ostream &os, Stock s)
{
	return (os << s.getTickerSymbol());
}

bool operator<(const Stock &s1, const Stock &s2)
{
	return s1.getTickerSymbol() < s2.getTickerSymbol();
}

