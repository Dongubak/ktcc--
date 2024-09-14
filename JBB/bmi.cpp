#include <iostream>
#include <iomanip>

using namespace std;

const double FEET_TO_INCHES = 12.0;
const double INCHES_TO_METERS = 0.0254;
const double POUNDS_TO_KILOGRAMS = 1 / 2.2;

int main() {
    int feet, inches;
    double weight, heightInMeters, weightInKilograms, bmi;

    cout << "Enter your height:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    int totalInches = feet * FEET_TO_INCHES + inches;

    heightInMeters = totalInches * INCHES_TO_METERS;
    weightInKilograms = weight * POUNDS_TO_KILOGRAMS;
    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    cout << setprecision(2) << fixed;
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}