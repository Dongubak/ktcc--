#include "sales.h"
#include <iostream>
#include <cstring>

// Sales 생성자
Sales::Sales(int yy) : year(yy) {
    std::memset(gross, 0, sizeof(gross));
}

Sales::Sales(int yy, const double *gr, int n) : year(yy) {
    int limit = (n < MONTHS) ? n : MONTHS;
    for (int i = 0; i < limit; ++i) {
        gross[i] = gr[i];
    }
    for (int i = limit; i < MONTHS; ++i) {
        gross[i] = 0;
    }
}

// Sales 연산자 정의
double Sales::operator[](int i) const {
    if (i < 0 || i >= MONTHS) {
        throw bad_index(i);
    }
    return gross[i];
}

double &Sales::operator[](int i) {
    if (i < 0 || i >= MONTHS) {
        throw bad_index(i);
    }
    return gross[i];
}

// LabeledSales 생성자
LabeledSales::LabeledSales(const std::string &lb, int yy) : Sales(yy), label(lb) {}

LabeledSales::LabeledSales(const std::string &lb, int yy, const double *gr, int n)
    : Sales(yy, gr, n), label(lb) {}

// LabeledSales 연산자 정의
double LabeledSales::operator[](int i) const {
    if (i < 0 || i >= MONTHS) {
        throw nbad_index(label, i);
    }
    return Sales::operator[](i);
}

double &LabeledSales::operator[](int i) {
    if (i < 0 || i >= MONTHS) {
        throw nbad_index(label, i);
    }
    return Sales::operator[](i);
}

// 예외 생성자 정의
Sales::bad_index::bad_index(int ix, const std::string &s) : std::logic_error(s), bi(ix) {}

LabeledSales::nbad_index::nbad_index(const std::string &lb, int ix, const std::string &s)
    : Sales::bad_index(ix, s), lbl(lb) {}
