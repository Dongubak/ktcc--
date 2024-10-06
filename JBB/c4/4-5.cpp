#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
	public:
    std::string brandname;
    double weight;
    int calories;
    

	CandyBar(string inputBrandName, double inputWeight, int inputCalories) {
		brandname = inputBrandName;
		weight = inputWeight;
		calories = inputCalories;
	}
	
	CandyBar(string inputBrandName, double inputWeight) {
		brandname = inputBrandName;
		weight = inputWeight;
		calories = 0;
	}
	
	CandyBar() {
		brandname = "";
		weight = 0;
		calories = 0;
	}

	
	string getBrandName() {
		return brandname;
	}
	
	double getWeight() {
		return weight;	
	}
	
	int getCalories() {
		return calories;
	}
};

int main() {
    CandyBar snack("Mocha Munch", 2.3, 350);
    CandyBar snack1;

    std::cout << "CandyBar Information:\n";
    std::cout << "Brand Name: " << snack.getBrandName() << "\n";
    std::cout << "Weight: " << snack.getWeight() << " g\n";
    std::cout << "Calories: " << snack.getCalories() << " kcal\n";
    cout << snack1.getBrandName() << "\n";
    cout << snack1.getWeight() << '\n';
    cout << snack1.getCalories() << '\n';
    cout << snack1.brandname << '\n';

    return 0;
}