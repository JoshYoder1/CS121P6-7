//Student.cpp

#include <string>
#include <iostream>
#include "Student.h"

Student::Student(){
	Student::studentString = "Arthur,Morgan,01899 O'Creigh Run,Valentine,NH,01907,03/15/1899,05/12/1917,60";
	Student::firstName = "John";
	Student::lastName = "Marston";
//	Student::dob = Date b;
//	b.init("01/01/1901");
//	Student::expectedGrad = Date g;
//	d.init("05/12/1919")
//	Student::address = Address a;
//	a.init("18999 Beechers Drive","Black Water","WE","19111")
	Student::creditHours = 70
}//end Student
/*
Student::~Student(){

}// end ~Student
 
Student::init(std::string studentString){
	
}// end init
*/
Student::getLastFirst(){
	name = Student::lastName + ", " + Student::firstName;
	return name;
}// end getLastFirst

Student::printStudent(){
	std::cout << Student::firstName;
	std::cout << Student::lastName;
//	std::cout << Student::address;
//	std::cout << Student::dob;
//	std::cout << Student::expectedGrad;
	std::cout << Student::creditHours;
}
