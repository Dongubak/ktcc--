// string 객체 사용
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

    while (1)  // 무한 루프
    {
        cin >> word;  // 단어 입력
        if (word == "done")  // 입력된 단어가 "done"이면 종료
            break;
        ++count;
    }
    cout << count <<"\n" ;
}