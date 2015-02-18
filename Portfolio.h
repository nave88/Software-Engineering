#ifndef PORTFOLIO
#define PORTFOLIO

#include <map>
#include <set>
#include "headers.h"
using namespace std;

class Portfolio
{
	map<Stock,unsigned> holdings;
	Money netProfit;
	
	public:
	Portfolio() : netProfit(0) {}	
	void buy(Stock s, unsigned amt, Date d);
	unsigned sell(Stock s, unsigned amt, Date d);
		
	Money getNetProfit();
	unsigned getStockQuantity(Stock s);
		
};

#endif
