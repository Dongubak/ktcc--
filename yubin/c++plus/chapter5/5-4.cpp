// 단리, 복리
#include <iostream>
using namespace std;

const int A_Principal = 100000;	
const int B_Principal = 100000;
const float A_Simple = 0.1;
const float B_Compund = 0.05;

int main()
{
	int A_Value = A_Principal;	
	int B_Value = B_Principal;	

	for (int year = 1; A_Value > B_Value; year++)
	{
		A_Value += A_Principal * A_Simple;
		B_Value += B_Value * B_Compund;
		cout << year << "년 후\t" << A_Value << "\t" << B_Value << "\n";
	}
	--year;
	cout << "\n";
	cout << year << "년 후 고객 B의 투자 가치가 고객 A의 투자 가치를 초과합니다.\n";
	cout << year << "년 후 고객 A의 투자 가치 : " << A_Value << "\n";
	cout << year << "년 후 고객 B의 투자 가치 : " << B_Value << "\n";

	return 0;
}
