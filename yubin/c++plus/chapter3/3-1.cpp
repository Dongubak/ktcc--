// 키 크기 구하기
#include <iostream>
using namespace std;
int main()
{
	int height_cm;
	const int METER = 100;

	cout << "키를 적으세요 : __\b\b\b"; 
	cin >> height_cm;
	cout << "당신의 키는 " << height_cm/METER << "M, " << height_cm % METER << "cm입니다.";
	return 0;
}
