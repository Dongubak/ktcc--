#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter text (End with @): ";
    std::cin.get(ch);
    while ( ch != '@') {
        if (isdigit(ch)) {
            continue; 
        } else if (isupper(ch)) {
            std::cout << char(tolower(ch)); 
        } else if (islower(ch)) {
            std::cout << char(toupper(ch));
        } else {
        	std::cout << ch;
		}
		std::cin.get(ch); 
    }
    
    std::cout << "\n";
    return 0;
}
