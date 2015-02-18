#ifndef MONEY
#define MONEY

//Money holds a signed quantity of cents.

#include <iostream>
using namespace std;

class Money
{
	long cents;
	
	public:
	
	Money(long cents); //construct money object from number of cents
	Money(const Money &m); //construct money object from another money object
	
	long getCents() const;
	
	Money operator+(Money m2);
	Money operator-(Money m2);
	Money operator*(double d);
	Money operator*(long l);
	Money operator*(int l);
	Money operator*(unsigned l);
	
	Money operator+=(Money m);
	Money operator-=(Money m);
};
	
std::ostream & operator<<(std::ostream &o, const Money &m);



#endif
