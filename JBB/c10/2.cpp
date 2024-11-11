#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Person{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
    public:
        Person(){lname = ""; fname[0] = '\0';}
        Person(const string &ln, const char *fn = "Heyyou");
        void Show() const;
        void FormalShow() const;
};
Person::Person(const string &ln, const char *fn){
    lname = ln;
    strncpy(fname, fn, LIMIT);
}
void Person::Show() const{
    cout << "Name: " << lname << "\nfname: " << fname << '\n';
}
void FormalShow() const{
    cout << "Formal name: " << fname << " " << lname << '\n';
}
int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    cout << '\n';
    two.Show();
    two.FormalShow();
    cout << '\n';
    three.Show();
    three.FormalShow();
    return 0;
}