// <, > , => 같은 연산자 총 6개를 오버로딩하고 bool형 값을 반환함
#ifndef STONEWT3_H_
#define STONEWT3_H_
class Stonewt
{
private:
	enum {Lbs_per_stn = 14};	// 스톤당 파운드 수
	int stone;			
	double pds_left;	
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);	
	Stonewt();		
	~Stonewt();
	void show_lbs() const;		// 파운드 형식으로 출력
	void show_stn() const;		// 스톤과 파운드 조합 형식으로 출력
	bool operator<(const Stonewt & st) const;
	bool operator<=(const Stonewt & st) const;
	bool operator==(const Stonewt & st) const;
	bool operator>(const Stonewt & st) const;
	bool operator>=(const Stonewt & st) const;
	bool operator!=(const Stonewt & st) const;
};
#endif
