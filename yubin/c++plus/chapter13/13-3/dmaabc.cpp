#include "dmaabc.h"
// c = 색상, l 라벨, r 등급
dmaABC::dmaABC(const char *l, int r) {
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

dmaABC::dmaABC(const dmaABC &rs) {
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

dmaABC::~dmaABC() {
    delete[] label;
}

dmaABC &dmaABC::operator=(const dmaABC &rs) {
    if (this == &rs)
        return *this;
    delete[] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

ostream &operator<<(ostream &os, const dmaABC &rs) {
    os << "상표: " << rs.label << '\n';
    os << "등급: " << rs.rating << '\n';
    return os;
}

baseDMA::baseDMA(const char *l, int r) : dmaABC(l, r) {}

baseDMA::baseDMA(const baseDMA &rs) : dmaABC(rs) {}

void baseDMA::ViewGoods() const {
    cout << *this; 
}

baseDMA &baseDMA::operator=(const baseDMA &rs) {
    if (this == &rs)
        return *this;
    dmaABC::operator=(rs);
    return *this;
}

ostream &operator<<(ostream &os, const baseDMA &rs) {
    os << (const dmaABC &)rs; // 부모 클래스의 출력 연산자 호출
    return os;
}

// lacksDMA 클래스 메서드들
lacksDMA::lacksDMA(const char *c, const char *l, int r)
    : dmaABC(l, r) {
    strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const dmaABC &rs)
    : dmaABC(rs) {
    strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA &rs)
    : dmaABC(rs) {
    strcpy(color, rs.color);
}

void lacksDMA::ViewGoods() const {
    cout << *this;
    cout << "색상: " << color << '\n';
}

lacksDMA &lacksDMA::operator=(const lacksDMA &rs) {
    if (this == &rs)
        return *this;
    dmaABC::operator=(rs);
    strcpy(color, rs.color);
    return *this;
}

ostream &operator<<(ostream &os, const lacksDMA &rs) {
    os << (const dmaABC &)rs;
    os << "색상: " << rs.color << '\n';
    return os;
}

// hasDMA 클래스 메서드들
hasDMA::hasDMA(const char *s, const char *l, int r)
    : dmaABC(l, r) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const dmaABC &rs)
    : dmaABC(rs) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs)
    : dmaABC(hs) {
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete[] style;
}

void hasDMA::ViewGoods() const {
    cout << *this;
    cout << "스타일: " << style << '\n';
}

hasDMA &hasDMA::operator=(const hasDMA &rs) {
    if (this == &rs)
        return *this;
    delete[] style;
    dmaABC::operator=(rs);
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    return *this;
}

ostream &operator<<(ostream &os, const hasDMA &rs) {
    os << (const dmaABC &)rs;
    os << "스타일: " << rs.style << '\n';
    return os;
}
