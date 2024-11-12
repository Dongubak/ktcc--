#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
using namespace std;
class complex
{
private:
	double real; //실수
	double imaginary; //허수
public:
	complex(double Re = 0.0, double Im = 0.0);
	~complex() {};
	complex operator+(const complex & comp) const;
	complex operator-(const complex & comp) const;
	complex operator*(const complex & comp) const;
	complex operator*(double mult) const;
	complex operator~() const;
	friend complex operator*(double mult, const complex & comp)
		{ return comp * mult; }
	friend ostream & operator<<(ostream & os, const complex & comp);
	friend istream & operator>>(istream & is, complex & comp);
};
#endif
