#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calories;
};

void setCandyBar(CandyBar& candy, const char* aBrand = "Millennium Munch", double aWeight = 2.85, int aCalories = 350) {
    candy.brand = aBrand;
    candy.weight = aWeight;
    candy.calories = aCalories;
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
