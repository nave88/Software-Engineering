#ifndef DATE
#define DATE

#include <ctime>
using namespace std;

namespace SE
{	
	class Date
	{
		Date(unsigned char month, unsigned char day, unsigned year);
		Date(tm date);
		Date(time_t epochTime);
		
		unsigned char getMonth();
		unsigned char getDay();
		unsigned char getYear();
		
		struct tm getDate();
		time_t getTime();
	};
}

#endif
