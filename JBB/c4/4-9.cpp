#include <iostream>
#include <string>

using namespace std;
struct snack {
    string brandname;
    double weight;
    int calories;
};

int main() {
    snack* snackbar = new snack[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Brand name? " << i + 1 << ": ";
        getline(cin, snackbar[i].brandname);
        cout << "Weight? " << i + 1 << ": ";
        cin >> snackbar[i].weight;
        cout << "Calories? " << i + 1 << ": ";
        cin >> snackbar[i].calories;
        cin.ignore();
    }

    cout << "Snack:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Snack " << i + 1 << ":\n";
        cout << "Brand: " << snackbar[i].brandname << "\n";
        cout << "Weight: " << snackbar[i].weight << " grams\n";
        cout << "Calories: " << snackbar[i].calories << " kcal\n";
    }

    delete[] candyBars;

    return 0;
}
