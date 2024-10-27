#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calories;
};

void setCandyBar(CandyBar& candy, const char* brand = "Millennium Munch", double weight = 2.85, int calories = 350) {
    candy.brand = brand;
    candy.weight = weight;
    candy.calories = calories;
}

void displayCandyBar(CandyBar& candy) {
    cout << "Brand: " << candy.brand << "\n";
    cout << "Weight: " << candy.weight << " lbs\n";
    cout << "Calories: " << candy.calories << " kcal\n";
}

int main() {
    CandyBar snack;
    setCandyBar(snack);
    displayCandyBar(snack);
    
    cout << "\n";
    
    setCandyBar(snack, "Snickers", 1.75, 250);
    displayCandyBar(snack);

    return 0;
}
