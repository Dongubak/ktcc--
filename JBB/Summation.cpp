#include <iostream>

int main() {
    int first, second;
    int sum = 0;

    std::cout << "First integer: ";
    std::cin >> first;

    std::cout << "Second integer: ";
    std::cin >> second;

    if (first > second) {
        std::swap(first, second);
    }

    for (int i = first; i <= second; ++i) {
        sum += i;
    }

    std::cout << "Summation of " << first << " ~ " << second << " = " << sum << '\n';

    return 0;
}