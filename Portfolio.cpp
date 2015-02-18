#include <map>
#include <set>
#include "headers.h"
using namespace std;

		
void Portfolio::buy(Stock s, unsigned amt, Date d)
{
	Money price = getPrice(s, d)*((long)amt);
	
	if(holdings.count(s)==1)
	{
		unsigned &entry = holdings.at(s);
		entry += amt;
	}
	else
	{
		holdings[s] = amt;
	}
	
	netProfit -= price;
}

unsigned Portfolio::sell(Stock s, unsigned amt, Date d)
{	
	if(holdings.count(s)==0) return 0;
	else
	{
		unsigned numOwned = holdings[s];
		if(numOwned > amt)
		{
			holdings[s] -= amt;
			netProfit += getPrice(s, d)*((long)amt);
			return amt;
		}
		else
		{
			holdings.erase(s);
			netProfit += getPrice(s, d)*((long)numOwned);
			return numOwned;
		}
	}
}
		
Money Portfolio::getNetProfit()
{
	return netProfit;
}

unsigned Portfolio::getStockQuantity(Stock s)
{
	if(holdings.count(s)==1) return holdings[s];
	else return 0;
}

