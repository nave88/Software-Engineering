#include "headers.h"

Money getPrice(Stock s, Date d)
{
	char c = *(s.getTickerSymbol().c_str());
	c -= 'A';
	c+=1;
	long l = long(c);
	return Money(l);
}
