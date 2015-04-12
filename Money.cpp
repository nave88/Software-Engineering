#include "Money.h"
#include <iostream>
#include <ostream>
#include <cmath>
#include <sstream>
using namespace std;

Money::Money(long cents) : cents(cents) {}

Money::Money(const Money &m) : cents(m.getCents()) {}

Money::Money() : cents(0) {}
	
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

void Money::operator+=(Money m)
{
	cents += m.getCents();
}

void Money::operator-=(Money m)
{
	cents -= m.getCents();
}

string Money::toString()
{
	stringstream s;
	long tempCents=cents;
	if(cents<0)
	{
		s <<"-";
		tempCents = -tempCents;
	}
	long centPart = tempCents % 100;
	
	s <<tempCents / 100 <<"." <<centPart/10 <<centPart%10;
	
	return s.str();
}

Money::Money(string s)
{
	long dollarPart=0;
	long centPart=0;
	long coefficient=1;
	
	if(s.begin() == s.end()) 
	{
		cents = 0;
		return;
	}
	
	string::iterator iter = s.begin();
	if(*iter == '.') goto noDollars;
	
	while(*iter != '.' && iter != s.end()) ++iter;
	
	if(iter == s.end())
	{
		--iter;
		while(iter != s.begin())
		{
			dollarPart += (coefficient * (*iter-'0'));
			coefficient = coefficient * 10;
			--iter;
		}
		dollarPart += (coefficient * (*iter-'0'));
		cents = dollarPart * 100;
		return;
	}
	
	--iter;
	
	
	while(iter != s.begin())
	{
		dollarPart += (coefficient * (*iter-'0'));
		coefficient = coefficient * 10;
		--iter;
	}
	dollarPart += (coefficient * (*iter-'0'));
	
	noDollars:
	string::iterator iter2 = s.begin();
	while(*iter2 != '.') ++iter2;
	
	++iter2;
	if(iter2==s.end()) goto final;
	else centPart += 10 * (*iter2-'0');
	
	++iter2;
	if(iter2==s.end()) goto final;
	else centPart += (*iter2-'0');
	
	final:
	cents = dollarPart * 100 + centPart;
} 

bool Money::operator<(Money m)
{
	return this->cents < m.cents;
}

bool Money::operator==(Money m)
{
	return this->cents == m.cents;
}
	
	  
	
	
	
	
