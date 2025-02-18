# CS121P6

## Address.h
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

## Date.h
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

## Student.h
class Student
	protected:
		string studentString
		string firstName
		string lastName
		Date* dob
		Date* expectedGrad
		Address* Address
		int creditHours
	public:
		Student()
		~Student()
		void init(studentString)
		void getLastFirst()
		void printStudent()





## Address.cpp
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

## Date.cpp


## Student.cpp
