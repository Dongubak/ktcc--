#include <iostream>
#include <cstring> 
using namespace std;

template <typename T>
T maxn(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <>
const char* maxn(const char* arr[], int n) {
    const char* longest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (strlen(arr[i]) > strlen(longest)) {
            longest = arr[i];
        }
    }
    return longest;
}

int main() {
    int Array[6] = {1, 3, 5, 7, 9, 2};
    cout << "The largest integer is: " << maxn(Array, 6) << "\n";

    double doubleArray[4] = {1.1, 3.3, 5.5, 2.2};
    cout << "The largest double is: " << maxn(doubleArray, 4) << "\n";

    const char* wordArray[5] = {"apple", "banana", "cherry", "date", "elderberry"};
    cout << "The longest string is: " << maxn(wordArray, 5) << "\n";

    return 0;
}
