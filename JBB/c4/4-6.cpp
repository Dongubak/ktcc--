#include <iostream>
#include <string>

using namespace std;
struct snack {
    string brandname;
    double weight;
    int calories;
};

int main() {
    snack brands[3] = {
        {"Potato_Stick", 100, 481},
        {"Potato_Chip", 108, 544},
        {"Hardtack", 90, 344}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Snack " << i + 1 << ":\n";
        cout << "Brand: " << brands[i].brandname << "\n";
        cout << "Weight: " << brands[i].weight << " g\n";
        cout << "Calorie: " << brands[i].calories << " kcal\n";
    }

    return 0;
}