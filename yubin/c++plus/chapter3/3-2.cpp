// 키를 피트와 인치로 구분하고 bmi 구하기
#include <iostream>
using namespace std;
int main()
{
	float feet;	
	float inche;
	float weight_pound;
	const float FEET_TO_INCHE = 12;
	const float INCHE_TO_METTER = 0.0254;
	const float POUND_TO_KILOGRAM = 2.2;
	
	cout << "키의 피트 부분 입력: ";
	cin >> feet;
	cout << "키의 인치 부분 입력: ";
	cin >> inche;
	cout << "체중을 파운드 단위로 입력: ";
	cin >> weight_pound;
	float meter = (feet * FEET_TO_INCHE + inche) * INCHE_TO_METTER;	
	float kilogram = weight_pound / POUND_TO_KILOGRAM;
	float bmi = kilogram / (meter * meter);
	cout << "비만 지수 : " << bmi << "\n";
	return 0;
}
