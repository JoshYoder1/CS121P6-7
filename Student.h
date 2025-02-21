//Student.h

#include <string>
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS	

class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
//		Date* dob;
//		Date* expectedGrad;
//		Address* address;
		int creditHours;
	private:
		Student();
		~Student();
		void init(studentString);
		std::string getLastFirst; 
		void printStudent;
};// end Student
#endif
