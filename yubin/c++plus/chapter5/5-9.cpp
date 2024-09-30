#include <iostream>
#include <string>
using namespace std;

int main()
{
    using namespace std;
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
}