#include "headers.h"
#include <iostream>
using namespace std;



int main() 
{
	SE::Stock myStock("RSH");
	cout << myStock.getTickerSymbol() <<endl;
	
	SE::Money m(40000);
	cout <<m.getCents() <<endl;
}

