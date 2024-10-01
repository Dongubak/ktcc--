#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter text (End with @): ";
    
    while (std::cin.get(ch) && ch != '@') {
        if (isdigit(ch)) {
            continue; 
        } else if (isupper(ch)) {
            std::cout << static_cast<char>(tolower(ch)); 
        } else if (islower(ch)) {
            std::cout << static_cast<char>(toupper(ch));
        } else {
            std::cout << ch;
    	}
    }
    
    std::cout << "\n";
    return 0;
}
