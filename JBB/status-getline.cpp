#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, firstName);

    cout << "What is your last name? ";
    getline(cin, lastName);

    cout << "What letter grade do you deserve? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    if (grade == 'A' || grade == 'a')
        grade = 'B';
    else if (grade == 'B' || grade == 'b')
        grade = 'C';

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
