#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc); //매개변수를 받아서 golf 구조체를 설정

int setgolf(golf & g);//사용자로부터 이름과 핸디캡을 묻고 g의 멤버들을 입력한 값으로 설정, 이름이 입렫되면1, 빈문자열이면 0을 리턴

void handicap(golf & g, int hc); //핸디캡을 새로운 값으로 설정

void showgolf(const golf & g); // 구조체의 내용을 출력


#endif
