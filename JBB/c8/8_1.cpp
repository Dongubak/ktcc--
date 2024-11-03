#include <iostream>
#include <string>
using namespace std;

void printLine(string phr, int con = 0) {
    static int call = 0;
    call++;

    if (con) {
        for (int i = 0; i < call; ++i) {
            cout << phr << '\n';
        }
    } else {
        cout << phr << '\n';
    }
}

int main() {
    printLine("Hello, World!");
    printLine("Hello, World!", 1);
    printLine("Hello, World!", 1);  
    return 0;
}
