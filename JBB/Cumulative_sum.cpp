#include <iostream>

int main() {
    int num; //adding number
    long long sum = 0; //Cumulative sum - current sum plus num

    std::cout << "Enter numbers (enter 0 to terminate):\n";

    do {
        std::cout << "Enter a number: ";
        std::cin >> num;

        sum += num;
        std::cout << "Cumulative sum: " << sum << "\n";
    } while (num != 0); //if num isn't 0, cycle continue

    std::cout << "Terminated\n";

    return 0;
}