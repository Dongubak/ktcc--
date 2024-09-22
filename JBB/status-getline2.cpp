#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char a[30];
    char b[30];
    char c[60];

    cout << "Enter your first name: ";
    cin.getline(a, 30);

    cout << "Enter your last name: ";
    cin.getline(b, 30);

    strcpy(c, b);
    strcat(c, ", ");
    strcat(c, a);

    cout << "Here’s the information in a single string: " << c << endl;

    return 0;
}
