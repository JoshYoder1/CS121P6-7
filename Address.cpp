//Address.cpp

#include <iostream>
#include "Address.h"

Address::Address(){
	Address::street = "123 Playground Street";
	Address::city = "city";
	Address::state ="state";
	Address::zip = "12345";
}// end Address()

void Address::init(std::string tempStreet,std::string tempCity,std::string tempState,std::string tempZip){
	Address::street = tempStreet;
	Address::city = tempCity;
	Address::state = tempState;
	Address::zip = tempZip;
}// end init()

void Address::printAddress(){
	std::cout << Address::street << std::endl; 
	std::cout << Address::city << " ";
	std::cout << Address::state << ", "; 
	std::cout << Address::zip << std::endl;
}// end printAddress
