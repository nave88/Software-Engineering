#ifndef MONEY
#define MONEY

//for now money is just a unit of cents. So $123.85 will be 12385.
//I used long instead of unsigned long because we may need negative amounts.

#include <ostream>

	class Money
	{
		long cents;
		
		public:
		
		Money(long cents) : cents(cents) {}
		Money(const Money &m) : cents(m.getCents()) {}
		
		long getCents() const {return cents;}
	};
	
	std::ostream & operator<<(std::ostream &o, const Money &m);
	Money operator+(Money m1, Money m2);
	Money operator-(Money m1, Money m2);
	Money operator*(Money m, double d);
	Money operator*(Money m, long l);


#endif
