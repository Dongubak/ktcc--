//인구비중을 구하기. 형변환
#include <iostream>
using namespace std;


int main () {
    long long world, usa ;
    cout << "세계 인구수를 입력: ";
    cin >> world;
    cout << "미국의 인구수를 입력: ";
    cin >> usa;
    cout << "세계 인구수에서 미국이 차지하는 비중은" 
    // 입력받은 값이 정수라서 정수 나눗셈을 안하고 소숫점을 보여주기위해 형변환
	 << (static_cast<long double>(usa) / static_cast<long double>(world)) * 100 << "%이다"; 
    return 0;
}
