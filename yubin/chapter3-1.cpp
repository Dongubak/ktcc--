#include <iostream>
using namespace std;
int main()
{
	int height;
	const int METER = 100;

	cout << "키를 적으세요 : \b\b\b";
	cin >> height;
	cout << "당신의 키는 " << height/METER << "M, " << height % METER << "cm입니다.";
	return 0;
}
