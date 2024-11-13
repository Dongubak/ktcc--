#include "cow.h"
#include <iostream>

int main(){
    Cow cow("Vraylar", "Rumination", 550);
	Cow* cow2 = new Cow("Banteng", "Walking", 827);
	Cow cow3(cow);
	Cow cow4 = cow3;
    std::cout <<  "Cow: \n";
    cow.ShowCow();
    std::cout << "Cow2: \n";
    cow2->ShowCow();
    std::cout << "Cow3: \n";
    cow3.ShowCow();
    std::cout << "Cow4: \n";
    cow4.ShowCow();
    delete cow2;
    return 0;
}