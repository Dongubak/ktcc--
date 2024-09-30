//팩토리얼 구하는 문제인데 array배열객체 사용
#include <iostream>
#include <array>
using namespace std;

const int size = 101;

int main () 
{
    array <long double, size> factorials;
    factorials[0] = factorials[1] = 1;
    for ( int i = 2; i < size; i++ ) {
        factorials[i] = i * factorials[i-1];
    };
    for ( int i = 0; i < size; i++ ) {
        cout << i << "!= " << factorials[i] << "\n";
    };
    return 0;
}
