//Student.cpp

#include <stringstream>
#include <string>
#include <iostream>
#include "Student.h"

Student::Student(){
	Student::studentString = "Arthur,Morgan,01899 O'Creigh Run,Valentine,NH,01907,03/15/1899,05/12/1917,60";
	Student::firstName = "John";
	Student::lastName = "Marston";
	dob = new Date();
	Date expectedGrad;
	Student::address = Address a;
	Student::creditHours = 70
}//end Student

Student::~Student(){
	delete dob;
}// end ~Student

Student::init(std::string studentString){
	Student::studentString = studentString;
	
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string dobString;
	std::string expectedGradString;

	std::stringstream ss(studentString);
	//set variables
	std::getline(ss, Student::firstName, ',');
	std::getline(ss, Student::lastName. ',');
	std::getline(ss, street, ',');
	std::getline(ss, city, ',');
	std::getline(ss, state, ',');
	std::getline(ss, zip, ',');
	std::getline(ss, dobString, ',');
	std::getline(ss, expectedGradString, ',');
	std::getline(ss, Student::creditHours, ',');
	//initialize Date instances
	Student::dob.init(dobString);
	Student::expectedGrad.init(expectedGradString);
	//initialize Address instance
	Student::address.init(street,city,state,zip);
}// end init

Student::getLastFirst(){
	name = Student::lastName + ", " + Student::firstName;
	return name;
}// end getLastFirst

Student::printStudent(){
	std::cout << Student::firstName;
	std::cout << Student::lastName;
	Student::address.printAddress();
	Student::dob.printDate();
	Student::expectedGrad.printDate();
	std::cout << Student::creditHours;
}
