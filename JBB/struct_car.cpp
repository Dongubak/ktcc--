#include <iostream>
#include <string>

struct car {
    std::string make;
    int year;
};

int main() {
    int numCars;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> numCars;
    std::cin.ignore();

    car* cars = new car[numCars];

    for (int i = 0; i < numCars; ++i) {
        std::cout << "Car #" << (i + 1) << ":\n";
        std::cout << "Please enter the make: ";
        std::getline(std::cin, cars[i].make);
        std::cout << "Please enter the year made: ";
        std::cin >> cars[i].year;
        std::cin.ignore();
    }

    std::cout << "Here is your collection:\n";
    for (int i = 0; i < numCars; ++i) {
        std::cout << cars[i].year << " " << cars[i].make << "\n";
    }

    delete[] cars; 

    return 0;
}
