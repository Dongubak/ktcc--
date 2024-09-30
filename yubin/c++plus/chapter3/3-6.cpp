//갤런당 몇마일, 100km에 몇 리터
#include<iostream>
using namespace std;
int main()
{
    float miles, gallons;
	cout << "주행한 거리를 마일 단위로 입력: ";
	cin >> miles;
	cout << "휘발유의 양을 갤런 단위로 입력: ";
	cin >> gallons;
	cout << "주행한 거리:  " <<  miles << "마일, 휘발유 : " << gallons << "갤런.\n";
	cout << "갤런당 " << miles / gallons << "마일을 주행했습니다.\n";
	

    float kilometers, liters;
	cout << "주행한 거리를 킬로미터 단위로 입력: ";
	cin >> kilometers;
	cout << "휘발유의 양을 리터 단위로 입력 : ";
	cin >> liters;
	cout << "주행한 거리 : " <<  kilometers << "킬로미터, 소비한 휘발유 :" << liters << "리터.\n";
	cout << "100킬로미터당 " << 100 * liters/kilometers << "리터.\n";
	return 0;
    
}
