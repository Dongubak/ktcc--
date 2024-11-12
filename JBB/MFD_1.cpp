#include <iostream>

class Move{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;
        Move add(const Move & m) const;
        void reset(double a = 0, double b = 0);
};
Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmove() const{
    std::cout << "x = " << x << "; y = " << y << ";\n";
}
Move Move::add(const Move & m) const{
    return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b){
    x = a;
    y = b;
}
int main(){
    Move test0(7, 14);
    Move test1(100.3, 34.7);
    test0.showmove();
    test1.showmove();
    Move test2 = test0.add(test1);
    test2.showmove();
    test2.reset();
    test2.showmove();
    return 0;
}