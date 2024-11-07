// 객체를 선택해서 스톤, 정수 파운드, 부동소수점 파운드 형식을 골라서 출력하는 문제
// << 연산자를 오버로딩해서 show_stn 매서드를 대체해야함
#include <iostream>
using namespace std;
#include "stonewt2.h"

int main()
{
	Stonewt stn1(99.2);
	Stonewt stn2(30.9, 's');
	Stonewt stn3(14, 3.5, 'd');

	cout << "제1 객체: " << stn1 << "\n";
	cout << "제2 객체: " << stn2 << "\n";
	cout << "제3 객체: " << stn3 << "\n";

	Stonewt result;
	result = stn1 + stn2;
	result.setmode('s');
	cout << "stn1 + stn2 = " << result << "(스톤 파운드 조합 형식)\n";	
	result = stn1 - stn2;
	result.setmode('p');
	cout << "stn1 - stn2 = " << result << "(정수 파운드 형식)\n";
	result = stn1 * stn2;
	result.setmode('d');
	cout << "stn1 * stn2 = " << result << "(부동소수점 파운드 형식)\n";
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
