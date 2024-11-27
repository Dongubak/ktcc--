#include <iostream>
#include <cmath> 
#include "15-2.h"

using namespace std;

double hmean(double a, double b) 
{
    if (a == -b)
        throw hmeanexcp();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) 
{
    if (a < 0 || b < 0)
        throw gmeanexcp();
    return std::sqrt(a * b);
}
int main()
{

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {                  // start of try block
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << '\n';
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << '\n';
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (hmeanexcp & bg)    // start of catch block
        {
            cout << bg.what();
            cout << "Try again.\n";
            continue;
        }
        catch (gmeanexcp & bh)
        {
               cout << bh.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    return 0;
}


