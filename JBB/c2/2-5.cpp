#include <iostream>

using namespace std;

float ctf(float c) {
    return 1.8 * c + 32.0;
}

int main() {
    float c;

    cout << "Please enter a Celsius value: ";
    cin >> c;

    float f = ctf(c);

    cout << c << " degrees Celsius is " << f << " degrees Fahrenheit." << endl;

    return 0;
}