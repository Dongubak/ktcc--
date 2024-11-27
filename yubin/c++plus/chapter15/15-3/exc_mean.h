#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <stdexcept>
#include <string>
#include <sstream>

// 기본 클래스(Base Exception Class)
class base_exception : public std::logic_error {
protected:
    double v1, v2; // 예외 발생 시 저장할 입력 값
public:
    base_exception(double a, double b, const std::string &msg)
        : std::logic_error(msg), v1(a), v2(b) {}

    // 입력값과 관련된 메시지 보고
    virtual std::string report_args() const {
        std::ostringstream oss;
        oss << "Arguments: v1 = " << v1 << ", v2 = " << v2;
        return oss.str();
    }
};

// hmean 예외 클래스
class bad_hmean : public base_exception {
public:
    bad_hmean(double a, double b)
        : base_exception(a, b, "hmean() invalid arguments: a = -b") {}

    std::string report_args() const override {
        return "In hmean(): " + base_exception::report_args();
    }
};

// gmean 예외 클래스
class bad_gmean : public base_exception {
public:
    bad_gmean(double a, double b)
        : base_exception(a, b, "gmean() invalid arguments: arguments must be >= 0") {}

    std::string report_args() const override {
        return "In gmean(): " + base_exception::report_args();
    }
};

#endif
