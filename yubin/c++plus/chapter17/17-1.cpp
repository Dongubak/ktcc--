#include <iostream>
using namespace std;

int main(void)
{
    char ch;
    int count = 0;

    while (cin.get(ch) && ch != '$')
    {
        count++;
        if (ch == '$'){
            cin.putback(ch);
        }
        else
        cout << "입력이 끝났습니다.\n";
    }
        
    cout << count << " 개의 문자 입니다.\n";
    cin.get(ch);
    cout << "다음 입력할 문자는 " << ch << "입니다.\n" ;
    return 0;
}