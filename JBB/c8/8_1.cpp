#include <iostream>
#include <string>
using namespace std;

void printPhrase(string phr, int condition = 0) {
    static int call = 0;
    call++;

    if (condition) {
        for (int i = 0; i < call; ++i) {
            cout << phr << '\n';
        }
    } else {
        cout << phr << '\n';
    }
}

int main() {
    printPhrase("Hello, World!");
    printPhrase("Hello, World!", 1);
    printPhrase("Hello, World!", 1);  
    return 0;
}
