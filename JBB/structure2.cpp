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
        {"감자깡", 100, 481},
        {"감자칩", 108, 544},
        {"건빵", 90, 344}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "과자 " << i + 1 << ":\n";
        cout << "브랜드: " << Brands[i].brandName << endl;
        cout << "무게: " << Brands[i].weight << " g" << endl;
        cout << "칼로리: " << Brands[i].calories << endl;
        cout << endl;
    }

    return 0;
}