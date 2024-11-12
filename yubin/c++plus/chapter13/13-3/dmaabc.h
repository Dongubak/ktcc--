#ifndef DMAABC_H
#define DMAABC_H

#include <iostream>
#include <cstring>

using namespace std;

// 추상 기본 클래스
class dmaABC {
private:
    char *label;  // 동적할당할 상표
    int rating;   // 등급

public:
    dmaABC(const char *l = "null", int r = 0); // 생성자
    dmaABC(const dmaABC &rs);                 
    virtual ~dmaABC();                        // 소멸자

    virtual void ViewGoods() const = 0;       // 순수 가상 함수 , 출력
    dmaABC &operator=(const dmaABC &rs);      // 대입 연산자 오버로드
    friend ostream &operator<<(ostream &os, const dmaABC &rs); 

};

// baseDMA 클래스
class baseDMA : public dmaABC {  //그냥 상속만 받음아 damABC의 기능만 사용
public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA() {}

    void ViewGoods() const override;
    baseDMA &operator=(const baseDMA &rs);
    friend ostream &operator<<(ostream &os, const baseDMA &rs);
};

// lacksDMA 클래스
class lacksDMA : public dmaABC { //색상추가
private:
    char color[40]; // 색상

public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const char *c, const dmaABC &rs);
    lacksDMA(const lacksDMA &rs);

    void ViewGoods() const override;
    lacksDMA &operator=(const lacksDMA &rs);
    friend ostream &operator<<(ostream &os, const lacksDMA &rs);
};

// hasDMA 클래스
class hasDMA : public dmaABC { //스타일 동적할당, 상속받음
private:
    char *style; // 스타일 (동적 할당)

public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const dmaABC &rs);
    hasDMA(const hasDMA &hs);
    ~hasDMA();

    void ViewGoods() const override;
    hasDMA &operator=(const hasDMA &rs);
    friend ostream &operator<<(ostream &os, const hasDMA &rs);
};

#endif
