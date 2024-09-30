#include<iostream>
using namespace std;

int main()
{
    int sum;
    int num;

    cout << "수를 입력하세요. 끝내고 싶으면 0을 입력하세요.";
    cin >> num;

    while(num!=0){
        sum += num;
        cout << "수의 합은" << sum << "입니다.";
        cout << "더할 수를 입력하세요. 끝내고 싶으면 0을 입력하세요.";
        cin >> num;
    }
    return 0;
}

