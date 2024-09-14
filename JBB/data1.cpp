#include <iostream>
#include <limits.h>
int main(){
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int: " << sizeof n_int << " 바이트" << endl;
	cout << "short: " << sizeof n_short << " 바이트" << endl;
	cout << "long: " << sizeof n_long << " 바이트" << endl;
	cout << "long long: " << sizeof n_llong << " 바이트" << endl;
	
	cout << "최대 정수값=" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	
	cout << "최소 정수값= " << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;
	
	cout << "1바이트당 비트 = " << CHAR_BIT << endl;
	return 0;
}