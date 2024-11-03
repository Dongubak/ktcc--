#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;       
    char fname[LIMIT];

public:
    Person() {
        lname = "";
        fname[0] = '\0';
    }

    Person(const string & ln, const char * fn = "Heyyou") {
        lname = ln;
        strncpy(fname, fn, LIMIT - 1);
        fname[LIMIT - 1] = '\0';
    } 

    void Show() const {  
        cout << fname << " " << lname;
    }

    void FormalShow() const {  
        cout << lname << ", " << fname;
    }
    void SetFirstName(const char* fn) {
        strncpy(fname, fn, LIMIT - 1);
        fname[LIMIT - 1] = '\0';
    }

    void SetLastName(const string &ln) {
        lname = ln;
    }
};

int main() {
    Person one;
	one.SetLastName("Earl");
	one.SetFirstName("Carl");            
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    cout << "Person One: ";
    one.Show();
    cout << "\n";
    cout << "Formal Person One: ";
    one.FormalShow();
    cout << "\n" << "\n";

    cout << "Person Two: ";
    two.Show();
    cout << "\n";
    cout << "Formal Person Two: ";
    two.FormalShow();
    cout << "\n" << "\n";

    cout << "Person Three: ";
    three.Show();
    cout << "\n";
    cout << "Formal Person Three: ";
    three.FormalShow();
    cout << "\n";

    return 0;
}