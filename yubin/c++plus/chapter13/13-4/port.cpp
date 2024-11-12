// port.cpp -- 13장 프로그래밍 연습 4를 위한 메서드 정의
// pe13-04.cpp와 함께 컴파일한다
#include <iostream>
#include <cstring>
using namespace std;
#include "port.h"

// Port 기초 클래스
Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 19);
	style[19] = '\0';
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	cout << "브랜드: " << brand << '\n';
	cout << "스타일: " << style << '\n';
	cout << "수량: " << bottles << '\n';
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

// VintagePort 파생 클래스
VintagePort::VintagePort(const char * br, const char * st, int b, const char * nn, int y)
	: Port(br, st, b)	// style이 항상 "vintage"이다
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
	: Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "별명: " << nickname << '\n';
	cout << "포도수확년도: " << year << '\n';
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &) vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}

// (a) 완성된 코드를 참고하라.
//
// (b) BottleCount()는 Port와 VintagePort에서 동일하므로 다시 정의할 필요가 없다.
//     operator+=()와 operator-=()도 두 클래스에서 동일하므로 다시 정의할 필요가 없다.
//     Show()는 두 클래스에서 다른 버전이 사용되므로 다시 정의되어야 한다.
//
// (c) operator=()과 operator<<()는 참조나 포인터에 기초하여 적당한 버전을 호출하지 않고
//     객체에 기초하여 적당한 버전을 호출되므로 가상으로 선언하면 안 된다.
//
// (d) 완성된 코드를 참고하라.
