#include <iostream>
#include <string>
#include "headers.h"
#include "apifuncprogram.h"
using namespace std;
using namespace SE;


namespace backtest
{
	//do actual work here
	bool buy_helper(Stock s, unsigned amt, Portfolio &portfolio)
	{
		try
		{
			portfolio.buy(s,amt);
		}
		catch(exception e)
		{
			return false;
		}
		
		return true;
	}
	
	bool sell_helper(Stock s, unsigned amt, Portfolio &portfolio)
	{
		try
		{
			portfolio.buy(s,amt);
		}
		catch(int e)
		{
			return false;
		}
		
		return true;
	}
	Money getPrice_helper(Stock s, Date d, Portfolio &portfolio)
	{
		return getPrice(s, d);
	}
	Portfolio getPortfolio_helper(Portfolio &portfolio)
	{
		return portfolio;
	}
}
