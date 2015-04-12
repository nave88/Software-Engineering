#ifndef PORTFOLIO
#define PORTFOLIO

#include <map>
#include <set>
#include "headers.h"
using namespace std;

class Portfolio
{
	
	public:
	
	map<Stock,unsigned> holdings;
	Money cash;
	
	Portfolio(string s) : cash(s) {}	
	void buy(Stock s, unsigned amt, QDate d);
	unsigned sell(Stock s, unsigned amt, QDate d);
	
	void printPortfolio();
	unsigned numStocksOwned(Stock s);
		
	Money getCash();
	unsigned getStockQuantity(Stock s);
		
};

#endif
