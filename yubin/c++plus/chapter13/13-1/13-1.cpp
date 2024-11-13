// pe13-01.cpp -- 13장 프로그래밍 연습 1 테스트 프로그램
#include <iostream>
#include "classic.h"
using namespace std;

void Bravo(const Cd & disk)
{
	disk.Report();
}
int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd *pcd = &c1;

	cout << "객체를 직접 사용한다:\n";
	c1.Report();
	c2.Report();

	cout << "객체를 지시하는 Cd * 포인터를 사용한다:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Cd 참조 전달인자를 사용하여 함수를 호출한다:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "대입을 테스트한다:\n";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

