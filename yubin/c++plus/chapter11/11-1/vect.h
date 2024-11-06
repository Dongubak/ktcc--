// vect.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL}; // RECT: 직각, POL : 극좌표
    private:
        double x; // 수평성분
        double y; // 수직성분
        double mag; // 벡터의 길이
        double ang; // 벡터의 방향
        Mode mode; // 'r'= 직각좌표, 'p' = 극 좌표 선택하는 변수
        //값들을 설정하는 메서드
        void set_mag(); // 크기 계산하고 설정
        void set_ang(); // 각도 계산하고 설정
        void set_x(); //극 좌표계에서 x 성분을 결정
        void set_y(); // 극 좌표계에서 y성분을 결정
    public:
        Vector();
        Vector(double n1, double n2, Mode form = POL);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector(); // 소멸자
        double xval() const {return x;} // x값 반환
        double yval() const {return y;} // y값 반환
        double magval() const {return mag;} // 크기 반환
        double angval() const {return ang;} // 각도
        void polar_mode(); // 모드 극좌표
        void rect_mode(); // 모드 직각좌표
    // 연산자 오버로딩
        Vector operator+(const Vector & b) const; //+
        Vector operator-(const Vector & b) const; // -
        Vector operator-() const; // 반전
        Vector operator*(double n) const; //벡터와 스칼라값 곱하기
        // 프렌드함수
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream &
  operator<<(std::ostream & os, const Vector & v);
    };
} 
#endif