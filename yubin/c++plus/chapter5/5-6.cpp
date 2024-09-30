// 3-4번 코드 ++ 3년 동안의 월간 판매량 2차원 배열
#include <iostream>
using namespace std;

int main()
{
    int year = 3;
    int sum[3] = {0,0,0};
    int month = 12;
    int TotalSale = 0;
	char * MonthName[month] = {"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
	int MonthSale[year][month];

	
	for (int i = 0; i < year; i++)
	{
		cout << i + 1 << "차 년도" << "\n";
		for (int j = 0; j < month; j++)
		{
			cout << MonthName[j] << " 판매량: ";
			cin >> MonthSale[i][j];
			sum[i] += MonthSale[i][j];
		}
		cout << i + 1 << "차 년도 판매량: " << sum[i] << "\n";
	}
	
	for (i = 0; i < year; i++)
	{
		TotalSale += sum[i];
		cout << i + 1 << "년간 누적 판매량: " << TotalSale << "\n";
	}
	return 0;
}
