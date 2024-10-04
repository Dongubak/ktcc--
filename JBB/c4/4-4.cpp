#include <iostream>
#include <string>

int main() {
    
    std::string firstname;
    std::string lastname;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstname); 
    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastname);

    std::string fullname = lastname + ", " + firstname;
    std::cout << "Here's the information in a single string: " << fullname << "/n";

    return 0;
}
