#include <iostream>
#include <limits.h>
int main(){
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int: " << sizeof n_int << " ����Ʈ" << endl;
	cout << "short: " << sizeof n_short << " ����Ʈ" << endl;
	cout << "long: " << sizeof n_long << " ����Ʈ" << endl;
	cout << "long long: " << sizeof n_llong << " ����Ʈ" << endl;
	
	cout << "�ִ� ������=" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	
	cout << "�ּ� ������= " << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;
	
	cout << "1����Ʈ�� ��Ʈ = " << CHAR_BIT << endl;
	return 0;
}