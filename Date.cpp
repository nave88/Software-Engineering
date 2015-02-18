#include <ctime>
#include "headers.h"
using namespace std;

Date::Date(int month, int day, int year)
{
	time.tm_sec=0;
	time.tm_min=0;
	time.tm_hour=0;
	time.tm_mday = day;
	time.tm_mon=month-1;
	time.tm_year = year-1900;
	time.tm_isdst = -1;
}

Date::Date(struct tm t) : time(t) {}
	
int Date::getMonth() const
{
	return time.tm_mon+1;
}

Date::Date(const Date &d) : time(d.time) {}

int Date::getDay() const
{
	return time.tm_mday;
}

int Date::getYear() const
{
	return time.tm_year + 1900;
}

Date & Date::operator++()
{
	time_t epochTime = mktime(&time);
	int currDay = time.tm_mday;
	
	while(currDay == localtime(&epochTime)->tm_mday) epochTime += (time_t)3600;
	time = *localtime(&epochTime);
	return *this;
}

Date & Date::operator--()
{
	time_t epochTime = mktime(&time);
	int currDay = time.tm_mday;
	
	while(currDay == localtime(&epochTime)->tm_mday) epochTime -= (time_t)3600;
	time = *localtime(&epochTime);
	return *this;
}


Date Date::operator+(int days)
{
	Date retval(*this);
	for(unsigned long currDay=1; currDay<= days; ++currDay) ++retval;
	return retval;
}

Date Date::operator-(int days)
{
	Date retval(*this);
	for(unsigned long currDay=1; currDay<= days; ++currDay) --retval;
	return retval;
}

ostream &operator<<(ostream &o, Date d)
{
	o << d.getMonth() << "/" <<d.getDay() <<"/" <<d.getYear();
	return o;
}
