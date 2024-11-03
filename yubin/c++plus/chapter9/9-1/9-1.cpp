// 다중 파일 프로그램으로 헤더페일이 주워지고 함수하나는 매개변서 입력받고 하나는 계속 입력받으면서 입력받으면 1리턴, 하나는 출력

#include <iostream>
#include "golf.h"
using namespace std;

const int member = 5;
int main(void)
{
    golf team[member];

    cout << "5명의 골프팀 멤버를 입력하세요 : " << '\'' ;
    int i ;
    for (i = 0; i < member;  i++)
        if (setgolf(team[i]) == 0)
            break;
    for (int j = 0; j < i; j++)
        showgolf(team[j]);
    setgolf(team[0], "Fred Norman", 5);
    showgolf(team[0]);
    handicap(team[0], 3);
    showgolf(team[0]);

    return 0;
}
