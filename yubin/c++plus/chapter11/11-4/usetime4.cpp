//모든 오버로딩된 연산자들을 프렌드 함수를 사용하기.
// 시간 더하기 뺴기 곱하기함

#include <iostream>
#include "mytime4.h"
using namespace std;

int main()
{
	Time A;
	Time B(5, 40);
	Time C(2, 55);

	cout << "A, B, C:\n";
	cout << A <<"; " << B << "; " << C << '\n';
	A = B + C;
	cout << "B + C: " << A << '\n';
	A = B - C;
	cout << "B - C: " << A << '\n';
	A = B * 2.75;
	cout << "B * 2.75: " << A << '\n';
	cout << "10 * B: " << 10 * B << '\n';
	return 0; 
}
