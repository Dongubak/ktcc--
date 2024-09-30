#include <iostream>
using namespace std; 

int main()
{
    int line;
	cout << "출력할 행 수를 입력하시오: ";
	cin >> line;

	for(int i = 0; i < line; i++) {
		for(int j = 1; j < line-i; j++){
			cout << ".";}
		for(int j = 0; j <= i; j++){
			cout << "*";}
		cout << "\n";
	}
    return 0;
}
