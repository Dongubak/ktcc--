#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char firstname[30];
    char lastname[30];
    char fullname[60];

    cout << "Enter your first name: ";
    cin.getline(firstname, 30);

    cout << "Enter your last name: ";
    cin.getline(lastname, 30);

    strcpy(fullname, lastname);
    strcat(fullname, ", ");
    strcat(fullname, firstname);

    std::cout << "Here’s the information in a single string: " << fullname << "/n";

    return 0;
}
