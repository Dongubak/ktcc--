//조화평균 
#include <iostream>
using namespace std;

double harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

int main()
{
	double num1, num2;
	double result;

	cout << "(끝내려면 둘중에하나는 0을 입력)\n";
	cout << "두 수를 입력 ";
	cin >> num1 >> num2;
	while (num1 && num2)	// 둘 중 어느 하나라도 0이면 루프를 탈출한다
	{
		result = harmonic_mean(num1, num2);
		cout << num1 << "," << num2 << "의 조화평균은" << result << "입니다.\n";
		cout << "(끝내려면 둘중에 하나는 0을 입력)\n";
		cout << "두 수를 입력 ";
		cin >> num1 >> num2;
	}
	return 0;
}