#include <iostream>
#include <string>

using namespace std;
struct Snack {
    string brandName;
    double weight;
    int calories;
};

int main() {
    Snack Brands[3] = {
        {"���ڱ�", 100, 481},
        {"����Ĩ", 108, 544},
        {"�ǻ�", 90, 344}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "���� " << i + 1 << ":\n";
        cout << "�귣��: " << Brands[i].brandName << endl;
        cout << "����: " << Brands[i].weight << " g" << endl;
        cout << "Į�θ�: " << Brands[i].calories << endl;
        cout << endl;
    }

    return 0;
}