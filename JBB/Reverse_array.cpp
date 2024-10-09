#include <iostream>
#include <limits>
using namespace std;

int Fill_array(double arr[], int size) {
    int count = 0;
    cout << "Enter double values (non-numeric input to stop):\n";
    while (count < size && cin >> arr[count]) {
        count++;
    }
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    return count;
}

void Show_array(const double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void Reverse_array(double arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    const int MAX_SIZE = 100;
    double arr[MAX_SIZE];

    int size = Fill_array(arr, MAX_SIZE);
    cout << "Array contents:\n";
    Show_array(arr, size);

    Reverse_array(arr, size);
    cout << "Reversed array:\n";
    Show_array(arr, size);

    if (size > 2) {
        Reverse_array(arr + 1, size - 2);
    }
    cout << "Re-reversed array (without first and last elements):\n";
    Show_array(arr, size);

    return 0;
}
