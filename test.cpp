#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Example input string
    std::string date = "01/02/2000";
    
    // Variables to store day, month, and year
    std::string day, month, year;
    
    // Use a stringstream to split the string by "/"
    std::stringstream ss(date);
    
    // Split the string into day, month, and year
    std::getline(ss, day, '/');
    std::getline(ss, month, '/');
    std::getline(ss, year);
    
    // Output the separated values
    std::cout << "Day: " << day << std::endl;
    std::cout << "Month: " << month << std::endl;
    std::cout << "Year: " << year << std::endl;
    
    return 0;
}
