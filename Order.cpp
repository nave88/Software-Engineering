#include <map>
#include <set>
#include "headers.h"
#include "Order.h"
using namespace std;

		
void Order::changeQty(Stock s, int amt)
{
	/*if(orderTicket.count(s)==1)
	{
		int &entry = orderTicket.at(s);
		entry += amt;
		if(entry==0) orderTicket.erase(s);
	}
	else
	{ */
		orderTicket[s] = amt;
	//}
}

void Order::printOrder()
{
	for(map<Stock,int>::iterator iter = orderTicket.begin(); iter != orderTicket.end(); ++iter)
	{
		cout <<iter->first <<" " <<iter->second <<endl;
	}
}

map<Stock,int>::size_type Order::size()
{
	return orderTicket.size();
}

bool Order::executeOrder(Portfolio *p, QDate date)
{
	Money totalCash = p->getCash();
	for(map<Stock,int>::iterator it = orderTicket.begin(); it != orderTicket.end(); ++it)
	{
		//if(it->second > 0)
		//{
			totalCash -= getPrice(it->first, date) * it->second;
		//}
	/*	else
		{
			if(-it->second < p->holdings[it->first]) totalCash += getPrice(it->first, date) * (int)(-it->second);
			else totalCash +=  getPrice(it->first, date) * p->holdings[it->first];
		} */
	}
	
	if(totalCash < Money(0)) return false;
	
	for(map<Stock,int>::iterator it = orderTicket.begin(); it != orderTicket.end(); ++it)
	{
		cout <<it->first <<" " <<it->second <<endl;
		if(it->second > 0)
		{
			p->buy(it->first, it->second, date);
		}
		else
		{
			p->sell(it->first, -(it->second), date);
		}
	}
	
	orderTicket.clear();
	return true;
}

void Order::clear()
{
	orderTicket.clear();
}

