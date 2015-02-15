#include <string>
#include "headers.h"

bool buy(SE::Stock s, unsigned amt);
bool sell(SE::Stock s, unsigned amt);
SE::Money getPriceOfStock(SE::Stock s, SE::Date d);
SE::Portfolio getPortfolio();
