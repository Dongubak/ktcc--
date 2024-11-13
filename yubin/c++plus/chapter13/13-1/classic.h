#ifndef CLASSIC_H_
#define CLASSIC_H_
//대표곡을 나태내는 문자열을 추가하여 클래스파생
class Cd
{
private:
	char performers[50];	// 연주자
	char label[20];			// 음반사
	int selections;			// 수록된 곡 수
	double playtime;		// 분 단위의 연주 시간
public:
	Cd(char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Cd(const Cd &d);
	virtual void Report() const;	// CD의 모든 데이터를 보고한다
	Cd & operator=(const Cd & d);
};

// Cd 클래스로부터 파생시킨 Classic 클래스
class Classic : public Cd
{
private:
    char primary_work[50]; //대표곡
public:
	Classic(char * primary = "None", char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd & d, char * primary);
    virtual void Report() const;
    Classic & operator=(const Classic & x);
};

#endif
