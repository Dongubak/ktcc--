#include <iostream>

using namespace std;

class Move{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;
        Move add(const Move & m) const;
        void reset(double a = 0, double b = 0);
        Move operator+(const Move& other) {
        	return Move(x + other.x, y + other.y);
		}
		friend ostream& operator<<(ostream& os, const Move& move);
		friend istream& operator>>(istream& in, const Move& move);
//        Move operator[]
//        Move operator^()
        
};

ostream& operator<<(ostream& os, const Move& move) {
	os << "x : " << move.x << ", y : " << move.y << '\n';
	return os;
}
istream& operator>>(istream& in, const Move& move) {
	cout << "x : ";
	in >> move.x;
	cout << "y : ";
	in >> move.y;
	return in;
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
    cin >> test0;
    cout << test0;
//    test0.showmve();
//    test1.showmove();
////    Move test2 = test0.add(test1);
//    Move test2 = test0 + test1;
////    -> test0.operator+(test1);
//    test2.showmove();
//    test2.reset();
//    test2.showmove();
    return 0;
}