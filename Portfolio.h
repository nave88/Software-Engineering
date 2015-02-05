#ifndef PORTFOLIO
#define PORTFOLIO

#include <vector>
#include "Stock.h"

using namespace std;

namespace SE
{	
	class Portfolio
	{
		vector<pair<Stock,unsigned> > stocks;
		Money netProfit;
		
		void buy(Stock s, unsigned amt);
		void sell(Stock s, unsigned amt);
	};
}

#endif
