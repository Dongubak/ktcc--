#include <iostream>
#include <string>

using namespace std;
struct PizzaInfo {
    string brandName;
    double diameter;
    double weight;
};

int main() {
    PizzaInfo pizza;

    cout << "피자 브랜드: ";
    getline(cin, pizza.brandName);

    cout << "피자의 지름(인치): ";
    cin >> pizza.diameter;
    cout << "피자의 무게(킬로그램): ";
    cin >> pizza.weight;

    cout << "\n피자:\n";
    cout << "브랜드: " << pizza.brandName << endl;
    cout << "지름: " << pizza.diameter << " in" << endl;
    cout << "무게: " << pizza.weight << " kg" << endl;

    return 0;
}