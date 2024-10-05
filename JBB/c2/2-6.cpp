#include <iostream>

const int CONVERT_L_TO_AU = 63240; /// constant for converting light year to au

double converse(double ly);

int main() {
    double ly;

    std::cout << "거리를 광년 단위로 입력: ";
    std::cin >> ly;

    double au = converse(ly);

    std::cout << ly << " 광년 = " << au << " AU." << std::endl;

    return 0;
}

double converse(double ly)  {
    return ly * CONVERT_L_TO_AU;
}