#include <iostream>
using namespace std;

int main() {
    const double kmToMiles = 0.6214;
    const double litersToGallons = 3.875;

    double litersPer100Km, milesPerGallon;

    cout << "100km 주행 시 드는 연료 소모량(리터): ";
    cin >> litersPer100Km;

    milesPerGallon = 100.0 / (litersPer100Km * kmToMiles / litersToGallons);

    cout << "1갤런 당 주행 거리: " << milesPerGallon << " 마일" << endl;

    return 0;
}