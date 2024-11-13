#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>

using std::ostream;
using std::istream;

class String
{
    private:
        char *str;
        int len;
        static const int CINLIM = 80;
    public:
        String();
		String(const char *s);
        String(const String &);
        ~String();
        int length() const {return len;}
        int has(const char);
        void stringlow();
        void stringup();
        String & operator=(const String &);
        String & operator=(const char *);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream & operator<<(ostream &os, const String &st);
        friend istream & operator>>(istream &is, String &st);
        friend String operator+(const String &st1, const String &st2);
        friend String operator+(const char *, const String &);
};
#endif