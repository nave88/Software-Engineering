#include "Money.h"
#include <iostream>
#include <ostream>


std::ostream & operator<<(std::ostream &o, const Money &m)
{
	o << m.getCents();
	return o;
}

Money operator+(Money m1, Money m2) {return Money(m1.getCents()+m2.getCents());}
Money operator-(Money m1, Money m2) {return Money(m1.getCents()-m2.getCents());}
Money operator*(Money m, double d) {return Money((long)(m.getCents()*d));}
Money operator*(Money m, long l) {return Money(m.getCents()*l);}
