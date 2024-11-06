// usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "mytime.h"

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3, 35); // 3시간 35분 초기화
    Time tosca(2, 48); // 2시간 48분 초기화
    Time temp; // 임시 변수

    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl; // Aida와 Tosca 시간 출력

    temp = aida + tosca; // operator+() 호출, Aida와 Tosca의 합
    cout << "Aida + Tosca: " << temp << endl;

    temp = aida * 1.17; // 멤버 operator*() 호출, Aida의 시간에 1.17배
    cout << "Aida * 1.17: " << temp << endl;

    cout << "10.0 * Tosca: " << 10.0 * tosca << endl; // friend operator*() 호출, Tosca의 시간에 10배

    return 0;
}
