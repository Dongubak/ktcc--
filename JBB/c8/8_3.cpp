#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void toUpperCase(string& phr) {
    for (char& c : phr) {
        c = toupper(c);
    }
}

int main() {
    string input;

    while (true) {
        cout << "Enter a string (q to quit): ";
        getline(cin, input);

        if (input == "q") {
            break;
        }

        toUpperCase(input);
        cout << input << "\n";
    }

    cout << "Bye.\n";
    return 0;
}
