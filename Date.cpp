//Date.cpp

#include <iostream>
#include <sstream>
#include <string>
#include "Date.h"

Date::Date(){
	Date::date = "January 1 2000";
	Date::month = 01;
	Date::day = 01;
	Date::year = 2000;
}//end Date()

void Date::init(std::string dateString){
	std::string month;
	std::string day;
	std::string year;

	std::stringstream ss(dateString);

	std::getline(ss, month, '/');
	std::getline(ss, day, '/');
	std::getline(ss, year);
	//convert
	Date::month = std::stoi(month);
	Date::day = std::stoi(day);
	Date::year = std::stoi(year);
	
	std::string months[13] = {"Month", "January", "February", "March", 
		"April", "May", "June", "July", "August", "September", 
		"October", "November", "December"};

	Date::date = months[Date::month] + " " + day + ", " + year;
}//end init()


void Date::printDate(){
	std::cout << Date::date << std::endl;
}//end printdate
