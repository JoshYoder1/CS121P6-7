//Date.h

#include <iostream>
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

class Date{
	protected:
		std::string date;
		int month;
		int day;
		int year;
	public:
		Date();
		void init(std::string dateString);//algorithm needed
		void printDate();
		std::string getDate();
};

#endif
