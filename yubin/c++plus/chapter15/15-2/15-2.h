#ifndef error_
#define error_

#include <iostream>
#include <stdexcept>

class hmeanexcp : public std::logic_error
{
public:
    hmeanexcp()
     : std::logic_error("hmean() 잘못된 인자: a = -b\n")
     {

     }
};

class gmeanexcp : public std::logic_error
{
public:
    gmeanexcp()
     : std::logic_error("gmean() 인자는 0 이상이어야 합니다\n\n")
     {

     }
};
#endif
