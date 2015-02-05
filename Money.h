#ifndef MONEY
#define MONEY

using namespace std;

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
