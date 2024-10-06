#include <iostream>
using namespace std;

const int strsize = 50;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;    
};

void displayByPreference(const bop members[], int size) {
    for (int i = 0; i < size; ++i) {
        switch (members[i].preference) {
            case 0:
                cout << members[i].fullname << endl;
                break;
            case 1:
                cout << members[i].title << endl;
                break;
            case 2:
                cout << members[i].bopname << endl;
                break;
        }
    }
}

int main() {
    bop members[5] = {
        {"Wimp Macho", "Junior Programmer", "WOMP", 0}, //0=이름 1=직책 2=단체이름
        {"Raki Rhodes", "Senior Programmer", "RHODOS", 1},
        {"Celia Laiter", "Analyst Trainee", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HEINOUS", 1},
        {"Pat Hand", "Junior Programmer", "LOOPY", 2}
    };

    char choice;
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name\nb. display by title\nc. display by bopname\nd. display by preference\nq. quit\n";

    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 'a':
                for (int i = 0; i < 5; ++i) {
                    cout << members[i].fullname << endl;
                }
                break;
            case 'b':
                for (int i = 0; i < 5; ++i) {
                    cout << members[i].title << endl;
                }
                break;
            case 'c':
                for (int i = 0; i < 5; ++i) {
                    cout << members[i].bopname << endl;
                }
                break;
            case 'd':
                displayByPreference(members, 5);
                break;
            case 'q':
                cout << "Bye!\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 'q');

    return 0;
}
