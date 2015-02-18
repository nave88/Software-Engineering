#include "Money.h"
#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;

Money::Money(long cents) : cents(cents) {}

Money::Money(const Money &m) : cents(m.getCents()) {}
	
long Money::getCents() const
{
	return cents;
}

std::ostream & operator<<(std::ostream &o, const Money &m)
{
	o << m.getCents();
	return o;
}

Money Money::operator+(Money m2) 
{
	return Money(this->getCents()+m2.getCents());
}

Money Money::operator-(Money m2) 
{
	return Money(this->getCents()-m2.getCents());
}

Money Money::operator*(double d) 
{
	return Money(lround((this->getCents()*d)));
}

Money Money::operator*(long l) 
{
	return Money(this->getCents()*l);
}

Money Money::operator*(int l) 
{
	return Money(this->getCents()*l);
}

Money Money::operator*(unsigned l) 
{
	return Money(this->getCents()*l);
}

Money Money::operator+=(Money m)
{
	cents += m.getCents();
}

Money Money::operator-=(Money m)
{
	cents -= m.getCents();
}
