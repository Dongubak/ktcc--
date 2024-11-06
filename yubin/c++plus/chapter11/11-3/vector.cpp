#include <iostream>
#include <cmath>
#include "vector.h"
using namespace std;

namespace VECTOR
{
	const double Rad_to_deg = 57.2957795130823;

	// private 메서드들
	// x값과 y값으로 크기를 계산한다
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

	// 극 좌표를 사용하여 x를 설정한다
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	// 극 좌표를 사용하여 y를 설정한다
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	// public 메서드들
	Vector::Vector()		// 디폴트 생성자
	{
		x = y = mag = ang = 0.0;
		mode = 'r';
	}

	// form이 r이면 직각 좌표로부터 벡터를 구성한다
	// form이 p이면 극좌표로부터 벡터를 구성한다
	Vector::Vector(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 전달인자가 잘못되었다.\n";
			cout << "그래서 벡터를 0으로 설정하였다.\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	// form이 r이면 직각 좌표로부터 벡터를 구성한다(디폴트)
	// form이 p이면 극좌표로부터 벡터를 구성한다
	void Vector::set(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 전달인자가 잘못되었다.\n";
			cout << "그래서 벡터를 0으로 설정하였다.\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector()			// 파괴자
	{
	}

	void Vector::polar_mode()		// 극 좌표 모드로 설정한다
	{
		mode = 'p';
	}

	void Vector::rect_mode()		// 직각 좌표 모드로 설정한다
	{
		mode = 'r';
	}

	// 연산자 오버로딩
	// 두 Vector 객체를 더한다
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// Vector 객체 a에서 Vector 객체 b를 뺀다
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	// Vector 객체의 부호를 바꾼다
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	// Vector 객체에 n을 곱한다
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// 프렌드 메서드들
	// n에 Vector 객체 a를 곱한다
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// mode가 r이면 직각 좌표를 출력한다
	// mode가 p이면 극 좌표를 출력한다
	ostream & operator<<(ostream & os, const Vector & v)
	{
		if (v.mode == 'r')
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == 'p')
		{
			os << "(m,a) = (" << v.mag << ", "
			   << v.ang * Rad_to_deg << ")";
		}
		else
			os << "Vector 객체의 모드 지정이 틀렸습니다.\n";
		return os;
	}

}	// namespace VECTOR의 끝
