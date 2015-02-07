#ifndef MONEY
#define MONEY

using namespace std;

//for now money is just a unit of cents. So $123.85 will be 12385.
//I used long instead of unsigned long because we may need negative amounts.

namespace SE
{	
	class Money
	{
		
		long cents;
		
		public:
		
		Money(long cents) : cents(cents) {}
		
		long getCents();
	};
}

#endif
