#include <iostream>
#include <string>
using namespace std;

struct Contributor {
    string name;
    double contribution;
};

int main() {
    int numContributors;

    cout << "Enter the number of contributors: ";
    cin >> numContributors;
    cin.ignore(); 
    Contributor* contributors = new Contributor[numContributors];

    for (int i = 0; i < numContributors; ++i) {
        cout << "Enter the name of contributor #" << (i + 1) << ": ";
        getline(cin, contributors[i].name);
        cout << "Enter the contribution of " << contributors[i].name << " in USD: ";
        cin >> contributors[i].contribution;
        cin.ignore();
    }

    cout << "\nGrand Patrons\n";
    bool hasGrandPatrons = false;
    for (int i = 0; i < numContributors; ++i) {
        if (contributors[i].contribution >= 10000) {
            cout << contributors[i].name << ": $" << contributors[i].contribution << endl;
            hasGrandPatrons = true;
        }
    }
    if (!hasGrandPatrons) {
        cout << "none\n";
    }

    cout << "\nPatrons\n";
    bool hasPatrons = false;
    for (int i = 0; i < numContributors; ++i) {
        if (contributors[i].contribution < 10000) {
            cout << contributors[i].name << ": $" << contributors[i].contribution << endl;
            hasPatrons = true;
        }
    }
    if (!hasPatrons) {
        cout << "none\n";
    }

    delete[] contributors; 

    return 0;
}
