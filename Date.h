#ifndef DATE
#define DATE

#include <ctime>
using namespace std;

namespace SE
{	
	class Date
	{
		Date(unsigned char month, unsigned char day, unsigned year);
		Date(tm date); //tm is a structure in ctime
		Date(time_t epochTime); //time_t is the number of seconds since 1/1/1970
		
		unsigned char getMonth();
		unsigned char getDay();
		unsigned char getYear();
		
		struct tm getDate();
		time_t getTime();
	};
}

#endif
