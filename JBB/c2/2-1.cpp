#include <iostream>
#include <string>

int main() {
	string name, adress;

	std::cout << "이름:";
	std::cin >> name;
	std::cout << "주소:";
	std::cin >> adress;
	
    std::cout << "\'이름: " << name << "\'" << std::endl;
    cout << "\'주소: " << adress << "\'" << std::endl;
    

    return 0;
}