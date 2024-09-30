// 두 개의 정수를 입력받고 그 사이의 속한 모든 수의 합
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;		
	int input_A, input_B;		

	cout << "두 정수를 입력: ";
	cin >> input_A >> input_B;

	for (int i = input_A; i <= input_B; i++){
		sum += i;
    }
	cout << input_A << "부터 " << input_B << "까지의 합은 " << sum << "입니다.\n";
	return 0;
}
