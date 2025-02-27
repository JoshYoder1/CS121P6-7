//Student.h

#include <string>
#include "Date.h"
#include "Address.h"

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS	

class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* dob;
		Date* expectedGrad;
		Address* address;
		int creditHours;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		std::string getFirst();
		std::string getLast();
		int getHours();
		std::string getLastFirst(); 
		void printStudent();
};// end Student
#endif
