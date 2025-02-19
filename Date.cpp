//Date.cpp

#include <iostream>
#include "Date.h"

Date::Date(){
	Date::date = "January 1 2000"
	Date::month = 01;
	Date::day = 01;
	Date::year = 2000;
}//end Date()

void Date::init(std::string dateString){
	
}//end init()

void Date::printDate(){
	std::cout << Date::date << std::endl;
}//end printdate
