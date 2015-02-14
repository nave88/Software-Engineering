#include <string>
#include "headers.h"
using namespace std;
using namespace SE;

namespace backtest
{
	bool buy_helper(Stock s, unsigned amt, Portfolio &p);
	bool sell_helper(Stock s, unsigned amt, Portfolio &p);
	Money getPrice_helper(Stock s, Date d, Portfolio &p);
	Portfolio getPortfolio_helper(Portfolio &p);
}
