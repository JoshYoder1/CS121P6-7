//main.cpp

#include <iostream>
#include "Date.h"
#include "Address.h"
#include "Student.h"

void testAddress();
void testDate();
void testStudent();

int main(){
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  testStudent();
  return 0;
} // end main

void testAddress(){
  std::cout << "Testing Address..." << std::endl;
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
  std::cout << std::endl << std::endl;
} // end testAddress

void testDate(){
  std::cout << "Testing Date..." << std::endl;
  Date d;
  d.init("01/27/1997");
  d.printDate();
  std::cout << std::endl << std::endl;
} // end testDate
//
void testStudent(){
  std::cout << "Testing Student..." << std::endl;
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent
