#include <iostream>

double calculateTax(double income) {
    double tax = 0.0;

    if (income > 35000) {
        tax += (income - 35000) * 0.20;
        income = 35000;
    }
    if (income > 15000) {
        tax += (income - 15000) * 0.15;
        income = 15000;
    }
    if (income > 5000) {
        tax += (income - 5000) * 0.10;
        income = 5000;
    }
  return tax;
}

int main() {
    double income;

    std::cout << "Enter your income in tvarps (negative number to quit): ";
    while (income >= 0) {
    	std::cin >> income;
        double tax = calculateTax(income);
        std::cout << "Tax owed: " << tax << " tvarps" << "\n";
        std::cout << "Enter your income in tvarps (negative number to quit): ";
    }

    std::cout << "Goodbye!" << "\n";
    return 0;
}
