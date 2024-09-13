#include <iostream>
 
int main()
{
    
    int i = 2;
    if (i > 2)
        std::cout << i << " is greater than 2\n";
    else
        std::cout << i << " is not greater than 2\n";
 
    int j = 1;
    if (i > 1)
        if (j > 2)
            std::cout << i << " > 1 and " << j << " > 2\n";
        else 
            std::cout << i << " > 1 and " << j << " <= 2\n";
 
    // dtnamic_cast와 함께 조건 사용가능
    struct Base
    {
        virtual ~Base() {}
    };
 
    struct Derived : Base
    {
        void df() { std::cout << "df()\n"; }
    };
 
    Base* bp1 = new Base;
    Base* bp2 = new Derived;
 
    if (Derived* p = dynamic_cast<Derived*>(bp1)) 
        p->df(); 
 
    if (auto p = dynamic_cast<Derived*>(bp2)) 
        p->df(); 
}