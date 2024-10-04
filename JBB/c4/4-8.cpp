#include <iostream>
#include <string>

using namespace std;
struct pizzainfo {
    string brandname;
    double diameter;
    double weight;
};

int main() {
    pizzainfo* pizza = new pizzainfo;

    cout << "Brand of pizza: ";
    getline(cin, pizza->brandname);
    cin.ignore();
    cout << "Diameter of pizza in in: ";
    cin >> pizza->diameter;
    cout << "Weight of pizza in kg: ";
    cin >> pizza->weight;

    cout << "Pizza:\n";
    cout << "Brand Name: " << pizza->brandname << "\n";
    cout << "Diameter: " << pizza->diameter << " in\n";
    cout << "Weight: " << pizza->weight << " kg\n";

    delete pizza;

    return 0;
}
