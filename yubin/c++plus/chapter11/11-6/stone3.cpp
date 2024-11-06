#include <iostream>
#include "stonewt3.h"
using namespace std;

int main()
{
	Stonewt stones[6] = { Stonewt(12, 4), Stonewt(3, 8), Stonewt(27, 6) };
	double input_pounds;
	cout << "처음 3개의 배열 원소를초기화하였습니다.\n";
	cout << "비어 있는 나머지 배열 원소들을 파운드 값을 입력하여 설정하십시오:\n";
	for (int i = 3; i < 6; i++)
	{
		cout << i + 1 << "번째 원소: ";
		cin >> input_pounds;
		stones[i] = Stonewt(input_pounds);
	}
	Stonewt Max = stones[0];
	Stonewt Min = stones[0];
	Stonewt Stone11(11, 0); // 11스톤의 무게
	int over11 = 0; // 11스톤의 무게
	for (int i = 0; i < 6; i++)
	{
		if (stones[i] > Max)
			Max = stones[i];
		if (stones[i] < Min)
			Min = stones[i];
		if (stones[i] >= Stone11)
			over11++;
	}
	cout << "배열에 들어 있는 모든 객체를 표시합니다.\n";
	for (int i = 0; i < 6; i++)
	{
		cout << "객체 #" << i + 1 << ": ";
		stones[i].show_stn();
	}
	cout << "최대 원소: ";
	Max.show_stn();
	cout << "최소 원소: ";
	Min.show_stn();
	cout << "11스톤보다 크거나 같은 원소의 개수: " << over11 << "\n";
	return 0;
}
