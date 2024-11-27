#ifndef SALES_H_
#define SALES_H_

#include <stdexcept>
#include <string>

class Sales {
public:
    // 상수: 월별 데이터 개수 (12개월)
    enum { MONTHS = 12 };

    // 예외 클래스: Sales의 잘못된 인덱스 접근 처리
    class bad_index : public std::logic_error {
    private:
        int bi; // 잘못된 인덱스 값
    public:
        explicit bad_index(int ix, const std::string &s = "Index error in Sales object\n");
        int bi_val() const { return bi; }  // 잘못된 인덱스 값 반환
        virtual ~bad_index() throw() {}
    };

    // 생성자
    explicit Sales(int yy = 0);                          // 연도만 지정
    Sales(int yy, const double *gr, int n);              // 연도와 월별 데이터를 지정
    virtual ~Sales() {}

    // 멤버 함수
    int Year() const { return year; }                    // 연도 반환
    virtual double operator[](int i) const;              // const 연산자 오버로드
    virtual double &operator[](int i);                   // 비-const 연산자 오버로드

private:
    double gross[MONTHS];                                // 월별 데이터
    int year;                                            // 연도
};

class LabeledSales : public Sales {
public:
    // 예외 클래스: LabeledSales의 잘못된 인덱스 접근 처리
    class nbad_index : public Sales::bad_index {
    private:
        std::string lbl; // 잘못된 라벨 값
    public:
        nbad_index(const std::string &lb, int ix,
                   const std::string &s = "Index error in LabeledSales object\n");
        const std::string &label_val() const { return lbl; }  // 라벨 값 반환
        virtual ~nbad_index() throw() {}
    };

    // 생성자
    explicit LabeledSales(const std::string &lb = "none", int yy = 0);  // 라벨과 연도 지정
    LabeledSales(const std::string &lb, int yy, const double *gr, int n); // 라벨, 연도, 월별 데이터 지정
    virtual ~LabeledSales() {}

    // 멤버 함수
    const std::string &Label() const { return label; }  // 라벨 반환
    virtual double operator[](int i) const;            // const 연산자 오버로드
    virtual double &operator[](int i);                 // 비-const 연산자 오버로드

private:
    std::string label; // 제품 라벨
};

#endif
