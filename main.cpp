//main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include "Date.h"
#include "Address.h"
#include "Student.h"

void testAddress();
void testDate();
void testStudent();
void printStudentNames(const std::vector<Student>& students);
void printStudentdata(const std::vector<Student>& students);
void findStudent(const std::vector<Student>& students);
std::string sortStudents(const std::vector<Student>& students);
bool compare(const Student& a, const Student& b, int sortType);
void printOptions();
void initializeStudents(const std::vector<Student>& students);

int main(){
	
  std::cout << "Hello!" << std::endl;/*
  testAddress();
  testDate();
  testStudent();
	*/
  
  std::vector<Student> students = {};

	bool keepGoing = true;
	initializeStudents(students);

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

void initializeStudents(const std::vector<Student>& students){
  std::cout << "initializeStudents---" << std::endl;
  std::ifstream file("students.csv");

  if(!file){
    std::cout << "!!!error opening file!!!" << std::endl;
  }// end if

  else:
    std::string line;
    std::string temp;

    while(std::getline(file, line)){
      std::stringstream ss(line);
    }
}// end initializeStudents