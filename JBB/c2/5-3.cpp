#include <iostream>

int main() {
    int num;
    long long sum = 0;

    std::cout << "Enter numbers (enter 0 to terminate):\n";

    do {
        std::cout << "Enter a number: ";
        std::cin >> num;

        sum += num;
        std::cout << "Cumulative sum: " << sum << "\n";
    } while (num != 0);

    std::cout << "Terminated\n";

    return 0;
}