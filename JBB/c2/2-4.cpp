#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter your age: ";
    cin >> year;

    int month = year * 12;
	cout << endl;
    cout << "Your age in months is " << month << "." << endl;

    return 0;
}