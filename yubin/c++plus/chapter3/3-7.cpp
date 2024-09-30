//마일당 쓴 개런 구하기

#include<iostream>
using namespace std;
int main()
{
	const float MILES_100KM = 62.14;
	const float GALLON_per_liters = 3.875;
	float eu_liters, mpg; //mpg: miles per gallon
	cout << "유럽 스타일인 100킬로미터당 리터 수 입력: "; 
	cin >> eu_liters;
	mpg = MILES_100KM / eu_liters * GALLON_per_liters; //1라터당 주행거리를 구하고 이게 몇 갤런인지 구함
	cout << "미국 스타일의 주행 거리는 갤런당 " << mpg << "마일.\n";
	return 0;
}
