#ifndef DATE
#define DATE

#include <ctime>
#include <stdexcept>
using namespace std;

namespace SE
{	
	class Date
	{
		private:
		unsigned char m;
		unsigned char d;
		int y;
		struct tm sD;
		time_t tD;
		
		public: 
		//set date methods
		Date(unsigned char month, unsigned char day, int year);
		Date(tm date); //tm is a structure in ctime
		Date(time_t epochTime); //time_t is the number of seconds since 1/1/1970
		
		//get date methods
		unsigned char getMonth();
		unsigned char getDay();
		int getYear();
		struct tm getDate();
		time_t getTime();
	};
}

#endif
