#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x) // 수록된 곡n , 시간 x
{
	strncpy(performers, s1, 49);
	performers[49] = '\0';
	strncpy(label, s2, 19);
	label[19] = '\0';
	selections = n;
	playtime = x;
}

void Cd::Report() const
{
	cout << "연주자: " << performers << '\n';
	cout << "음반사: " << label << '\n';
	cout << "곡 수: " << selections << '\n';
	cout << "연주 시간: " << playtime << '\n';
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	strncpy(performers, d.performers, 49);
	performers[49] = '\0';
    strncpy(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * primary, char * s1, char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	strncpy(primary_work, primary, 49);
	primary_work[49] = '\0';
}

Classic::Classic(const Cd & d, char * primary)
	: Cd(d)
{
	strncpy(primary_work, primary_work, 49);
	primary_work[49] = '\0';
}

void Classic::Report() const
{
	cout << "대표곡: " << primary_work << '\n';
	Cd::Report();
}

Classic & Classic::operator=(const Classic & x)
{
	if (this == &x)
		return *this;
	Cd::operator=(x);
	strncpy(primary_work, x.primary_work, 49);
	primary_work[49] = '\0';
	return *this;
}
