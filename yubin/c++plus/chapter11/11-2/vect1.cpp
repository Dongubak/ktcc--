#include <cmath>
#include "vect1.h"   // <iostream> 포함
using std::sqrt;
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{

    const double Rad_to_deg = 57.2957795130823; // 라디안을 을 구하기 위한 상수

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector()            
    {
        x = y  = 0.0;
        mode = 'r'; 
    }

    Vector::Vector(double n1, double n2, char form)
    {
        mode = form;
        if (form == 'r') 
        {
            x = n1;
            y = n2;
        }
        else if (form == 'p') 
        {
            set_x(n1, n2 / Rad_to_deg); 
            set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = 'r';
        }
    }

    void Vector::set(double n1, double n2, char form)
    {
        mode = form;
        if (form == 'r') // 직각 좌표 모드
        {
            x = n1;
            y = n2;
        }
        else if (form == 'p') // 극 좌표 모드
        {
            set_x(n1, n2 / Rad_to_deg); // x와 y를 극 좌표로부터 설정
            set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = 'r';
        }
    }

    Vector::~Vector()    // 소멸자
    {
    }

    double Vector::magval() const // 벡터의 크기를 계산하여 반환
    {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const // 벡터의 각도를 계산하여 반환
    {
       if (x == 0.0 && y == 0.0)
            return 0; // 원점에서는 각도가 0
        else
            return atan2(y, x); // atan2를 사용하여 정확한 사분면의 각도를 계산
    }

    void Vector::polar_mode()    // 극 좌표 모드로 설정
    {
        mode = 'p';
    }

    void Vector::rect_mode()     // 직각 좌표 모드로 설정
    {
        mode = 'r';
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // friend methods
    // 스칼라와 벡터의 곱셈
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // 모드가 'r'이면 직각 좌표로 출력, 'p'이면 극 좌표로 출력
    ostream & operator<<(ostream & os, const Vector & v)
    {
        if (v.mode == 'r')
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == 'p')
        {
            os << "(m,a) = (" << v.magval() << ", "
               << v.angval() * Rad_to_deg << ")";
        }
        else
            os << "Vector object mode is invalid";
        return os;
    }

}  // end namespace VECTOR
