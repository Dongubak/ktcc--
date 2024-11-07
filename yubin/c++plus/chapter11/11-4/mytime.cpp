// mytime3.cpp -- implementing Time methods
#include "mytime.h"
#include <iostream>

// 기본 생성자
Time::Time() {
    hours = minutes = 0;
}

// 매개변수를 사용한 생성자
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

// 시간 추가 메서드
void Time::AddHr(int h) {
    hours += h;
}

// 분 추가 메서드
void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

// 시간과 분을 재설정하는 메서드
void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

// 덧셈 연산자 오버로딩
Time Time::operator+(const Time & t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

// 뺄셈 연산자 오버로딩
Time Time::operator-(const Time & t) const {
    Time diff;
    int tot1 = t.minutes + 60 * t.hours;
    int tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

// 곱셈 연산자 오버로딩
Time Time::operator*(double mult) const {
    Time result;
    long totalMinutes = hours * mult * 60 + minutes * mult;
    result.hours = totalMinutes / 60;
    result.minutes = totalMinutes % 60;
    return result;
}

// 출력 연산자 오버로딩
std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}