#include <iostream>
#include <cmath>
#include "exc_mean.h"

using namespace std;

// hmean 함수 정의
double hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

// gmean 함수 정의
double gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}

int main() {
    double x, y, z;

    cout << "두 수를 입력하십시오: ";
    while (cin >> x >> y) {
        try {
            // 예외가 발생할 가능성이 있는 코드
            z = hmean(x, y);
            cout << "Harmonic mean: " << z << endl;
            cout << "Geometric mean: " << gmean(x, y) << endl;
            cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
        } catch (const base_exception &e) {
            // 공통 처리
            cout << e.what() << endl;           // 예외 메시지 출력
            cout << e.report_args() << endl;    // 입력 값 출력
            cout << "프로그램을 종료합니다." << endl;
            break; // 루프 종료
        }
    }
    return 0;
}
