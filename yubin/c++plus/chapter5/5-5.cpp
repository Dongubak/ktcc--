#include <iostream>
using namespace std;
int main()
{
	char * Month[12] = {"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
	int Book_sales[12];
    int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << Month[i] << " 판매량: ";
		cin >> Book_sales[i];
		sum += Book_sales[i];
	}

	cout << "연간 총 판매량: " << sum << "\n";
	return 0;
}
