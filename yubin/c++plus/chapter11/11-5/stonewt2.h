// stonewt2.h -- Stonewt 클래스 선언
#ifndef STONEWT2_H_
#define STONEWT2_H_
class Stonewt
{
private:
	enum {Lbs_per_stn = 14};		// 스톤당 파운드 수
	int stone;						// 정수부(스톤)
	double pds_left;			// 소수부(파운드)
	double pounds;				// 파운드로 나타낸 전체 무게
	char mode;				// 's' = 스톤 파운드 조합 형식, 'p' = 정수 파운드 형식, 'd' = 부동소수점 파운드 형식
public:
	Stonewt(double lbs, char md = 's');	// double형 파운드를 위한 생성자
	Stonewt(int stn, double lbs, char md = 's');	// stone, lbs를 위한 생성자
	Stonewt();										// 디폴트 생성자
	~Stonewt();
	void setmode(char ch);
	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt & st) const;
	Stonewt operator*(const Stonewt & st) const;
	friend ostream & operator<<(ostream & os, const Stonewt & st);
};
#endif
