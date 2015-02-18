#ifndef DATE
#define DATE

#include <ctime>
#include <iostream>
#include "headers.h"
using namespace std;


class Date
{	
	struct tm time;
	
	public: 
	Date(int month, int day, int year);
	Date(struct tm t);
	Date(const Date &d);
	
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	
	Date &operator++();
	Date &operator--();
	
	Date operator+(int days);
	Date operator-(int days);
};

ostream &operator<<(ostream &o, Date d);




#endif
