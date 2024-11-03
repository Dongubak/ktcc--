//판매데이터 관리프로그램 구조체 정의, namespace 사용, 배열 통째로 입력받는 함수, 하나씩 입력받는 함수, 출력하는 함수
#include <iostream>
#include "namesp.h"
using namespace std;

int main()
{
	using namespace SALES;
	
	Sales salesman_a, salesman_b;
	double array[QUARTERS] = {100.10, 200.10, 300.30, 400.40};
	
	
	cout << "판매사원 A의 분기별 판매액" << "\n";
	setSales(salesman_a, array, 5);
	showSales(salesman_a);
	
	cout << "판매사원 B의 분기별 판매액(입력)" << "\n";
	setSales(salesman_b);
	showSales(salesman_b);

	return 0;
}
