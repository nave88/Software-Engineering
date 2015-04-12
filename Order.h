#ifndef ORDER
#define ORDER

#include <map>
#include <set>
#include "headers.h"
using namespace std;

class Order
{	
	public:
	
	map<Stock,int> orderTicket;
	
	Order() {}
	
	void changeQty(Stock s, int amt);
	void printOrder();
	bool executeOrder(Portfolio *p, QDate date);
	void clear();
	map<Stock,int>::size_type size();
		
};

#endif
