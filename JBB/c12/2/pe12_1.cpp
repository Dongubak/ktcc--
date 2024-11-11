#include "string2.h"
#include <cstring>

using std::cin;
using std::cout;

String::String(){
    len = 4;
    str = new char[1];
    str[0] ='\0';
}
String::String(const char *s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
}
String::String(const String & st){
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}
String::~String(){
    delete [] str;
}
int String::has(const char s){
    int cnt = 0;
    for(int i = 0; i < len; i++)
        if(str[i] == s)
            cnt++;
    return cnt;
}
void String::stringlow(){
    for(int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}
void String::stringup(){
    for(int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}
String operator+(const String &st1, const String &st2){
    char tmp[st1.len + st2.len + 1];
    std::strcat(std::strcpy(tmp, st1.str), st2.str);
    return String(tmp);
}
String operator+(const char *s, const String &st){
    return String(s) + st;
}
String & String::operator=(const String & st){
    if(this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}
String & String::operator=(const char *s){
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}
bool operator==(const String &st1, const String &st2){
    return (std::strcmp(st1.str, st2.str) == 0);
}
ostream & operator<<(ostream &os, const String &st){
    os << st.str;
    return os;
}
istream & operator>>(istream &is, String &st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
        st = temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}