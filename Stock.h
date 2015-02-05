#ifndef STOCK
#define STOCK

#include <string>

namespace SE
{
	class Stock
	{
		std::string tickerSymbol;
		
		public:
		Stock(std::string tickerSymbol) : tickerSymbol(tickerSymbol) {}
		
		std::string getTickerSymbol();
	};
}

#endif
