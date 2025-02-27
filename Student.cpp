//Student.cpp

#include <sstream>
#include <string>
#include <iostream>
#include "Student.h"

Student::Student(){
	Student::studentString = "Arthur,Morgan,01899 O'Creigh Run,Valentine,NH,01907,03/15/1899,05/12/1917,60";
	Student::firstName = "John";
	Student::lastName = "Marston";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	Student::creditHours = 70;
}//end Student

Student::~Student(){
	delete dob;
	delete expectedGrad;
	delete address;
}// end ~Student

void Student::init(std::string studentString){
	Student::studentString = studentString;
	
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string dobString;
	std::string expectedGradString;
	std::string tempS;
	int tempI;

	std::stringstream ss(studentString);
	//set variables
	std::getline(ss, tempS, ',');
	Student::firstName = tempS;
	std::getline(ss, tempS, ',');
	Student::lastName = tempS;
	std::getline(ss, street, ',');
	std::getline(ss, city, ',');
	std::getline(ss, state, ',');
	std::getline(ss, zip, ',');
	std::getline(ss, dobString, ',');
	std::getline(ss, expectedGradString, ',');
	std::getline(ss, tempS, ',');
	Student::creditHours = tempI;
	//initialize Date instances
	Student::dob->init(dobString);
	Student::expectedGrad->init(expectedGradString);
	//initialize Address instance
	Student::address->init(street,city,state,zip);
}// end init

std::string Student::getFirst(){
	return Student::firstName;
}// end getFirst

std::string Student::getLast(){
	return Student::lastName;
}// end getLast

int Student::getHours(){
	
	return Student::creditHours;
}// end getHours

std::string Student::getLastFirst(){
	std::stringstream ss;
	ss << Student::creditHours;
	std::string credits = ss.str();
	std::string name = Student::lastName + ", " + Student::firstName + ", " + credits;
	return name;
}// end getLastFirst
 
void Student::printStudent(){
	std::cout << Student::firstName << ", ";
	std::cout << Student::lastName << std::endl;
	Student::address->printAddress();
	std::cout << "DOB: ";
	Student::dob->printDate();
	std::cout << std::endl << "Grad:";
	Student::expectedGrad->printDate();
	std::cout << std::endl << "Credits: ";
	std::cout << Student::creditHours;
}
