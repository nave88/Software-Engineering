#include "headers.h"
#include <iostream>
using namespace std;



int main() 
{
	SE::Stock myStock("Evan");
	cout << myStock.getTickerSymbol() <<endl;
	
	SE::Money myFutureMonthlyUnemploymentBenefits(40000);
	cout <<myFutureMonthlyUnemploymentBenefits.getCents() <<endl;
}

