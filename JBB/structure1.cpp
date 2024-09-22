#include <iostream>
#include <string>

using namespace std;

struct CandyBar {        //class 
	string brandName;
    double weight;
    int calories;
};

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Brand Name: " << snack.brandName << endl;
    cout << "Weight: " << snack.weight << " oz" << endl;
    cout << "Calories: " << snack.calories << endl;

    return 0;
}