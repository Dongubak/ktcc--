#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstname, lastname; //const int size = 20
    char grade;					//char firstname[size], lastname[size]
    int age;

    cout << "What is your first name? ";
    getline(cin, firstname);	//getline(firstname, size)

    cout << "What is your last name? ";
    cin >> lastname;

    cout << "What letter grade do you deserve? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    if (grade == 'A')
        grade = 'B';
    else if (grade == 'B')
        grade = 'C';
    else if (grade == 'C')
    	grade = 'D';
    else
    	grade = 'F';

    cout << "Name: " << lastname << ", " << firstname << "/n";
    cout << "Grade: " << grade << "/n";
    cout << "Age: " << age << "/n";

    return 0;
    
}
