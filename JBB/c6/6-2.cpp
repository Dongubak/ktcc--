#include <iostream>
#include <limits>
#include <vector>

int main() {
    const int MAX_DONATIONS = 10;
    std::vector<double> donations;
    double value;

    std::cout << "Enter up to " << MAX_DONATIONS << " donation values (non-number input to stop):\n";

    while (donations.size() < MAX_DONATIONS) {
        std::cout << "Enter donation value: ";
        if (std::cin >> value) {
            donations.push_back(value);
        } else {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }

    if (donations.empty()) {
        std::cout << "No valid donations were entered.\n";
        return 0;
    }

    double sum = 0;
    for (double donation : donations) {
        sum += donation;
    }
    double average = sum / donations.size();

    int countLargeValue = 0;
    for (double donation : donations) {
        if (donation > average) {
            countLargeValue++;
        }
    }

    std::cout << "Average donation: " << average << "\n";
    std::cout << "Number of donations larger than the average: " << countLargeValue << "\n";

    return 0;
}
