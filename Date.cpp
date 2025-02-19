//Date.cp

#include <iostream>
#include "Date.h"

Date::Date(){
	Date::date = 01/01/0101
	Date::month = 01;
	Date::day = 01;
	Date::year = 0101;
}//end Date()

void Date::init(std::string dateString){
	
}//end init()

void Date::printDate(){
	std::cout << Date::date << std::endl;
}//end printdate
