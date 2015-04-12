#include <map>
#include <set>
#include "headers.h"
using namespace std;

		
void Portfolio::buy(Stock s, unsigned amt, QDate d)
{
	Money price = getPrice(s, d)*((long)amt);
	
	//if((cash - price) < Money(0)) return;
	
	if(holdings.count(s)==1)
	{
		unsigned &entry = holdings.at(s);
		entry += amt;
	}
	else
	{
		holdings[s] = amt;
	}
	
	cash -= price;
}

unsigned Portfolio::sell(Stock s, unsigned amt, QDate d)
{	
	if(holdings.count(s)==0) return 0;
	else
	{
		unsigned numOwned = holdings[s];
		if(numOwned > amt)
		{
			holdings[s] -= amt;
			cash += getPrice(s, d)*((long)amt);
			return amt;
		}
		else
		{
			holdings.erase(s);
			cash += getPrice(s, d)*((long)numOwned);
			return numOwned;
		}
	}
}
		
Money Portfolio::getCash()
{
	return cash;
}

unsigned Portfolio::getStockQuantity(Stock s)
{
	if(holdings.count(s)==1) return holdings[s];
	else return 0;
}

void Portfolio::printPortfolio()
{
	cout <<"begin:" <<endl;
	for(map<Stock,unsigned>::iterator it = holdings.begin(); it != holdings.end(); ++it)
	{
		cout <<it->first << " " <<it->second <<endl;
	}
	
	cout << getCash() <<endl;
	cout <<endl;
}

unsigned Portfolio::numStocksOwned(Stock s)
{
	if(holdings.count(s)==0) return 0;
	else return(holdings.at(s));
}

