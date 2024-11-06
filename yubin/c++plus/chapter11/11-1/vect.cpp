// vect.cpp -- methods for the Vector class
#include <cmath>
#include "vect.h" // includes <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // 라디안을 도로 변환하기 위한 상수
    const double Rad_to_deg = 45.0 / atan(1.0);
    // 57.2957795130823

    // private 맷서드
    // x, y로 부터 벡터 크기 계산
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }
    // 극좌표에서 x성분 계싼
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }
    // 극좌표애서 y성분 계산
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }

    // public 메서드
    //생성자 모든 값 0
    Vector::Vector() 
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
    // construct vector from rectangular coordinates if form is r
    // (the default) or else from polar coordinates if form is p
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg; //라디안으로 변경
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    //벡터 재설정
    void Vector:: reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
            {
                x = n1;
                y = n2;
                set_mag();
                set_ang();
            }
    
        else if (form == POL)
            {
                mag = n1;
                ang = n2 / Rad_to_deg;
                set_x();
                set_y();
            }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector() // 소멸자
    {
    }
    void Vector::polar_mode() // 극좌표계 설정
    {
        mode = POL;
    }
    void Vector::rect_mode() // 직각 좌표계 설정
    {
        mode = RECT;
    }
    // 연산자 오버로딩
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    // subtract Vector b from a
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    // reverse sign of Vector
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    // multiply vector by n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }
    // display rectangular coordinates if mode is RECT,
    // else display polar coordinates if mode is POL
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
            {
                os << "(m,a) = (" << v.mag << ", "
                << v.ang * Rad_to_deg << ")";
            }
        else
            os << "Vector object mode is invalid";
            return os;
    }
} // end namespace VECTOR
