#include "apifuncclient.h"
#include <string>
#include <iostream>
#include <cstdio>
#include "Date.h"

using namespace std;
using namespace SE;

extern "C" void plugin(Date d)
{
	cout <<"today is day " <<d.day <<endl;
	
	
	char stockToBuyToday[1024];
	sprintf(stockToBuyToday, "%c", d.day+'A');
	
	buy(string(stockToBuyToday), d.day*d.day);
	sell(string(stockToBuyToday), d.day*d.day);
	
	cout <<endl;
}
