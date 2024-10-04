#include <iostream>
using namespace std;

int main() {
    char choice;
    int r = 0;
	
    cout << "Please enter one of the following choices:\n";
    cout << "A) carnivore\tB) pianist\n";
    cout << "C) tree\t\tD) mind game\n";
    cin >> choice;
	while (r == 0) {
        switch (choice) {
            case 'A':
                cout << "Cat is a carnivore.\n";
                r = 1;
                break;
            case 'B':
                cout << "Szpilman was a pianist.\n";
                r = 1;
                break;
            case 'C':
                cout << "A maple is a tree.\n";
                r = 1;
                break;
            case 'D':
                cout << "The Game is a mind game.\n";
                r = 1;
                break;
            default:
                cout << "Please enter a A, B, C, or D: ";
                cin >> choice;
                break;
        }
    }

    return 0;
}
