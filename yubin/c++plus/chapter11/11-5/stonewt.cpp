// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"

using std::cout;

// double 값을 사용하여 Stonewt 객체 생성
Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn; // 스톤 수 계산
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs); // 남은 파운드 계산
    pounds = lbs; // 전체 파운드 값 저장
}

// stone과 double 값을 사용하여 Stonewt 객체 생성
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs; // 전체 파운드 값 계산
}

// 기본 생성자, 무게를 0으로 초기화
Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

// 소멸자
Stonewt::~Stonewt()
{
}

// 스톤 단위로 무게 출력
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// 파운드 단위로 무게 출력
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}
