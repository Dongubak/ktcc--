#include <iostream>
#include <cstring>

using namespace std;

class Cow{
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow &);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};
Cow::Cow(){
    hobby = new char[1];
    hobby[0] = '\0';
    name[0] = '\0';
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt){
    hobby = new char[std::strlen(ho) + 1];
    strcpy(hobby, ho);
    strcpy(name, nm);
    weight = wt;
}
Cow::Cow(const Cow & c){
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    strcpy(name, c.name);
    weight = c.weight;
}
Cow::~Cow(){
    delete [] hobby;
}
Cow & Cow::operator=(const Cow & c){
    if(this == &c)
        return *this;
    delete [] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    strcpy(name, c.name);
    weight = c.weight;
    return *this;
}
void Cow::ShowCow() const{
    cout << " Name: " << name << "\n Hobby: " << hobby
              << "\n Weight: " << weight << '\n';
}
int main()
{
    Cow test1;
    Cow test2("Ann", "Tennis", 117);
    Cow * test = new Cow("Peter", "Hockey", 127);
    cout <<  "test: \n";
    test->ShowCow();
    cout << "test1: \n";
    test1.ShowCow();
    cout << "test2: \n";
    test2.ShowCow();
    delete test;
    
    return 0;
}