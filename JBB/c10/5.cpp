#include <iostream>
#include <cstring>

class Plorg{
    private:
        static const int MAX = 19;
        char fullname[MAX];
        int ci;
    public:
        Plorg(const char *name = "Plorga", int i = 50);
        void show() const;
        void changeCI(int i);
};

Plorg::Plorg(const char *name, int i){
    strncpy(fullname, name, MAX);
    ci = i;
}
void Plorg::show() const{
    std::cout << "Plorg\n name: " << fullname << "\n CI: " << ci << "\n";
}
void Plorg::changeCI(int i){
    ci = i;
}

int main(){
    Plorg pl0;
    pl0.show();
    Plorg pl("Phroggy", 37);
    pl.show();
    pl.changeCI(77);
    pl.show();
    return 0;
}