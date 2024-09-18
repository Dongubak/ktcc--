#include <iostream>

using namespace std;
int main() {
    double a, b;

    cout << "주행 거리(km): ";
    cin >> a;

    cout << "휘발유 소모량(L): ";
    cin >> b;

    double c = (b / a) * 100.0;

    cout << "차량 연비는 100km 당 " << c << " 리터입니다." << endl;

    return 0;
}