// new 사용해서 2개짜리 배열을 버퍼에 넣기

#include <iostream>
#include <new>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};


int main()
{
    chaff *p1;
    char * buffer = new char [500];	
    p1 = new (buffer) chaff[2];	
    strcpy(p1[0].dross, "asdfasdf");
    p1[0].slag = 10;
    strcpy(p1[1].dross, "qwerqwr");
    p1[1].slag = -10;

    for (int i = 0; i < 2; i++)
        cout << p1[i].dross << ": " << p1[i].slag << "\n";
    delete [] buffer;

    return 0;
}
