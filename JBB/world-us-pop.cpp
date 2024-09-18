#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long a, b; // 혹은 a = 8176031738 / b = 345810593 대입 후 cin 스킵

    cout << "Enter the world's population: ";
    cin >> a;
    cout << "Enter the population of the US: ";
    cin >> b;

    double c = static_cast<double>(b) / a * 100;

    cout << "The population of the US is " << fixed << setprecision(5)
        << c << "% of the world population." << endl;

    return 0;
}