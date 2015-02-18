#include "headers.h"
#include <iostream>
using namespace std;

int main() 
{
	Date d(0,0,0);
	
	Portfolio p;
	
	Stock a("A");
	Stock b("B");
	Stock c("C");
	
	p.buy(a,1,d);
	cout <<p.getNetProfit() <<endl;
	
	p.buy(b,3,d);
	cout <<p.getNetProfit() <<endl;
	
	p.buy(c,2,d);
	cout <<p.getNetProfit() <<endl;
	
	p.sell(a,10,d);
	cout <<p.getNetProfit() <<endl;
	
	p.sell(b,1,d);
	cout <<p.getNetProfit() <<endl;
	
	p.sell(c,2,d);
	cout <<p.getNetProfit() <<endl;
	
	p.buy(a,1,d);
	cout <<p.getNetProfit() <<endl;
}

