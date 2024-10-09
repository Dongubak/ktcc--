//calculate()함수 완성하기, ㅇouble 형 인자, double형을 리턴하는 함수를 지시하는 포인터. 함수 포인터가 저장된 배열
#include <iostream>
using namespace std;

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);	
double calculate(double x, double y, double (*pf)(double, double));

int main()
{
	double (*pf[4]) (double, double) = {add, sub, mul, div};
	double x, y;
	double array[4];

	cout << "x와 y를 입력하시오. 끝내려면 q입력 ";
	while (cin >> x && cin >> y)
	{
		for (int i = 0; i < 4; i++)
			array[i] = calculate(x, y, pf[i]);
		
		cout << "x + y = " << array[0] << "\n";
		cout << "x - y = " << array[1] << "\n";
		cout << "x * y = " << array[2] << "\n";
		cout << "x / y = " << array[3] << "\n";
		cout << "\n";
		
		cout << "x와 y를 입력하십시오.끝내려면 q 입력: ";
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mul(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return (pf(x,y));
}
