//재귀 팩토리얼
#include <iostream>
using namespace std;

int factorial(int num)
{
	if (num == 0)
		return 1;
	return num * factorial(num-1);
}

int main()
{
	unsigned int num;
	cout << "팩토리얼을 구할 수를 입력하십시오: ";
	while (cin >> num)
	{
		cout << num << "!은 " << factorial(num) << "입니다.\n";
		cout << "팩토리얼을 구할 수를 입력하십시오.";
	}
	return 0;
}
