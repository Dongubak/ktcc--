#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[5]) {
    T max = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int Array[5] = {1, 3, 5, 7, 9};
    double doubleArray[5] = {1.1, 3.3, 5.5, 7.7, 9.9};

    cout << "The largest integer is: " << max5(Array) << "\n";
    cout << "The largest double is: " << max5(doubleArray) << "\n";

    return 0;
}
