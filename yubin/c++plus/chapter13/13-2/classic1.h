#ifndef CLASSIC1_H_
#define CLASSIC1_H_
//동적할당해서 수정
class Cd	
{
private:
	char * performers;		// 연주자
	char * label;			// 음반사
	int selections;			// 곡 수
	double playtime;		// 분 단위의 연주 시간
public:
	Cd(char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Cd(const Cd & d);
	virtual ~Cd();
	virtual void Report() const;	// CD의 모든 데이터를 보고한다
	Cd & operator=(const Cd & d);
};

// Cd 클래스로부터 파생시킨 Classic 클래스
class Classic : public Cd
{
private:
    char * primary_work;
public:
    // 생성자들
	Classic(char * primary = "None", char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd & d, char * primary);
	Classic(const Classic & x);
	~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & x);
};

#endif
