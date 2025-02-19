#include <string>
#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS


class Address{
	protected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string tempStreet, std::string tempCity,
				std::string tempState,std::string tempZip);
		void printAddress();
};

#endif
