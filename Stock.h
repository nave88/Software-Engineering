#ifndef STOCK
#define STOCK

#include <string>

//stock class for now is just a string of stock's ticker symbol

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
