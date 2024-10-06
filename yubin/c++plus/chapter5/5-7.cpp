//new를 사용하여 동적 구조체 배열 만들기
#include <iostream>
using namespace std;
struct car
{
	char Maker[20];
	int Production_year;
};
int main()
{
	int car_count;

	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> car_count;

	car * CarList = new car[car_count];

	for (int i = 0; i < car_count; i++) 
	{
		cout << "자동차 #" << i + 1 << "\n";
		cout << "제작업체: ";
		cin.getline(CarList[i].Maker, 20); 
		cout << "제작연도: ";
		(cin >> CarList[i].Production_year).get();
	}

	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << "\n";
	for (i = 0; i < car_count; i++) {
		cout << CarList[i].Production_year << "년형 " << CarList[i].Maker << "\n";
	}

	delete [] CarList;
	return 0;
}
