# CS121P6

## Address.h
```
include string

class Address:
	protected:
		string address
		string city
		string state
		string zip
	public:
		Address()
		void init(address, city, state, zip)
		void printAddress()
```
## Date.h
```
include iostream

class Date:
	protected:
		string date
		int month
		int day
		int year
	public:
		Date()
		void init(dateString)
			Algorithm needed
		void printDate()
```
## Student.h
```
class Student
	protected:
		string studentString
		string firstName
		string lastName
		Date* dob
		Date* expectedGrad
		Address* address
		int creditHours
	public:
		Student()
		~Student()
		void init(studentString)
		void getLastFirst()
		void printStudent()
```
## Address.cpp
```
include iostream
include Address.h

Address::Address():
	Address::address = "123 Playground Street"
	Address::city = "Town"
	Address::state = "State"
	Address::zip = "12345"

Address::init(string address, string city, string state, string zip):
	Address::address = address
	Address::city = city
	Address::state = state
	Address::zip = zip

Address::printAddress():
	output "Address: "
	output Address::street " "
	output Address::city " "
	output Address::state " "
	output Address::zip endline
```
## Date.cpp
```
include iostream
include sstream
include string
include Date.h

Date::Date():
	Date::date = "January 1 2000"
	Date::month = 01
	Date::day = 01
	Date:year = 2000

Date::init(string dateString):
	std::stringstream ss(dateString)
	std::getline(ss, month, "/")
	std::getline(ss, day, "/")
	std::getline(ss, year)

	Date::month = std::stoi(month)
	Date::day = std::stoi(day)
	Date::year = std::stoi(year)

	std::string months[13] = {"Month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}
	
	Date::date = months[Date::month] + " " + day + ", " + year



Date::printDate():
	output Date::date endline
```
## Student.cpp
```
```
##main.cpp
```
include <iostream>
include "Date.h"
include "Address.h"
include "Student.h"

void testAddress()
void testDate()
void testStudent()
void printStudentNames()
void printStudentData()
void findStudent()
string sortStudents()
void printOptions()
void initializeStudents()

int main():
	//test
	/*comment out
	std::cout "Hello!" end line
	testAddress()
	testDate()
	testStudent()
	*/stop comment

	bool keepGoing = true
	
	while keepGoing = true:
		printOptions()
		answer = UserInput
		if answer == 0:
			keepGoing = false
		elif asnwer == 1:
			printStudentNames()
		elif answer == 2:
			printStudentData()
		elif answer == 3:
			findStudent()
		elif answer == 4:
			sortStudents()
		else:
			output "Choose a valid option (0-4)"
```
###printOptions
```
output "0) quit" end line
output "1) print student names" end line
output "2) print student data" end line
output "3) find students" end line
output "4) sort students" end line
```
###initializeStudents
```
open student data file

read each line of file:
	create new instance of each student
	add intance to dynamic list
	
close student data file
```
###printStudentNames

