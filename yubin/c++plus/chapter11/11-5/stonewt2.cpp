// stonewt2.cpp -- Stonewt 클래스의 메서드 정의
#include <iostream>
using namespace std;
#include "stonewt2.h"

// double형 값으로 Stonewt 객체를 생성한다
Stonewt::Stonewt(double lbs, char md)
{
	mode = md;
	stone = int(lbs) / Lbs_per_stn;		// 정수 나눗셈
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// int형 값과 double형 값으로 Stonewt 객체를 생성한다
Stonewt::Stonewt(int stn, double lbs, char md)
{
	mode = md;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()	
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()	
{
}

void Stonewt::setmode(char md)
{
	mode = md;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt & st) const
{
	return Stonewt(pounds * st.pounds);
}

ostream & operator<<(ostream & os, const Stonewt & st)
{
	if (st.mode == 's')			// 스톤 파운드 조합 형식
		os << st.stone << "스톤 " << st.pds_left << "파운드";
	else if (st.mode == 'p')	// 정수 파운드 형식
		os << int(st.pounds) << "파운드";
	else if (st.mode == 'd')	// 부동소수점 파운드 형식
		os << st.pounds << "파운드";
	else
		os << "Stonewt 객체의 모드 지정이 틀렸습니다.\n";
	return os;
}
