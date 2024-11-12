#include <iostream>
#include "port.h"
using namespace std;


int main()
{
	Port pt1("Gallo", "tawny", 20);
	Port pt2("Chateau Haut Brion", "vintage", 30);
	Port pt3("Romanee Conti", "ruby", 40);
	Port tport;

	tport.Show();
	cout << '\n';

	tport = pt1;
	tport.Show();
	cout << '\n';

	cout << pt2;
	cout << '\n';

	cout << pt3;
	cout << '\n';

	pt3 += 3;
	cout << pt3;
	cout << '\n';

	pt3 -= 3;
	cout << pt3;
	cout << '\n' << '\n';

	// VintagePort 클래스 테스트
	VintagePort vpt1("Chateau Haut Brion", "vintage", 30, "The Noble", 1950);
	VintagePort vpt2("Chambertin", "vintage", 17, "Old Velvet", 1912);
	
	VintagePort tvport;
	tvport.Show();
	cout << '\n';

	tvport = vpt1;
	tvport.Show();
	cout << '\n';

	cout << vpt2;
	cout << '\n';

	vpt2 += 3;
	cout << vpt2;
	cout << '\n';

	vpt2 -= 3;
	cout << vpt2;
	cout << '\n';

	cout << "프로그램을 종료합니다.\n";
	return 0;
}
