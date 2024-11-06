// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
    enum { Lbs_per_stn = 14 }; // 1 스톤당 파운드 수
    int stone;                 // 전체 스톤 수
    double pds_left;           // 남은 파운드 수
    double pounds;             // 전체 무게 (파운드 단위)

public:
    Stonewt(double lbs);       // 파운드 단위의 무게를 받는 생성자
    Stonewt(int stn, double lbs); // 스톤과 파운드 단위의 무게를 받는 생성자
    Stonewt();                 // 기본 생성자
    ~Stonewt();                // 소멸자
    void show_lbs() const;     // 파운드 단위로 무게를 출력하는 메서드
    void show_stn() const;     // 스톤 단위로 무게를 출력하는 메서드
};

#endif
