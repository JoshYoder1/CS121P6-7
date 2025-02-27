//main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include "Date.h"
#include "Address.h"
#include "Student.h"

void testAddress();
void testDate();
void testStudent();
void printStudentNames(/*vector*/);
void printStudentdata();
void findStudent();
std::string sortStudents();
bool compare(const Student& a, const Student& b, int sortType);
void printOptions();
void initializeStudents();

int main(){
	
  std::cout << "Hello!" << std::endl;/*
  testAddress();
  testDate();
  testStudent();
	*/
  
  return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
  Date d;
  d.init("01/27/1997");
  d.printDate();
  std::cout << std::endl;
} // end testDate
//
void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent
