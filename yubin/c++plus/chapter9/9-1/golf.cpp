#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

int setgolf(golf & g)
{
    cout << "골퍼의 이름을 입력하시오. ";
    cin.getline(g.fullname, Len);
    if (g.fullname[0] == '\0'){
        return 0;
    }
    cout  << g.fullname << "의 핸디캡을 입력하시오. ";
    while (!(cin >> g.handicap))
    {
        cin.clear();
        cout << "정수로 입력하시오 ";
    }
    while (cin.get() != '\n')
        continue;
    return 1;
}

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << "골퍼:  " << g.fullname << "\n";
    cout << "핸디캡 : " << g.handicap << "\n";
}
