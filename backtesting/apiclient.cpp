#include <iostream>
#include "apifuncclient.h"
#include "apifuncprogram.h"
#include "headers.h"
using namespace std;
using namespace SE;
using namespace backtest;

Portfolio *p;

//call real function in apiprogram.cpp and return result to plugin
bool buy(Stock s, unsigned amt)
{
	return backtest::buy_helper(s, amt, *p);
}

bool sell(Stock s, unsigned amt)
{
	return backtest::sell_helper(s, amt, *p);
}

Money getPriceOfStock(Stock s, Date d)
{
	return SE::getPrice(s,d);
}

Portfolio getPortfolio()
{
	return backtest::getPortfolio_helper(*p);
}

extern "C" void init(Portfolio *po)
{
	p = po;
}
