// randwalk.cpp -- Vector 클래스를 사용함
// vect.cpp 파일과 함께 컴파일

#include <iostream>
#include <cstdlib> // rand(), srand() 원형
#include <ctime>   // time() 원형
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0)); // 현재 시간을 시드로 사용하여 난수 생성기 초기화

    double direction;          // 이동 방향 (0 ~ 359도)
    Vector step;               // 각 걸음의 벡터
    Vector result(0.0, 0.0);   // 현재 위치를 나타내는 벡터, 초기값은 (0, 0)
    unsigned long steps = 0;   // 총 걸음 수
    double target;             // 목표 거리
    double dstep;              // 각 걸음의 길이

    cout << "목표 거리를 입력하십시오 (종료하려면 q): ";
    while (cin >> target) // 목표 거리를 입력받음, q를 입력하면 종료
    {

        cout << "걸음 길이를 입력하십시오: ";
        if (!(cin >> dstep)) 
            break;
        //목표 도달할떄까지 반복
        while (result.magval() < target)
        {
            direction = rand() % 360; 
            step.reset(dstep, direction, Vector::POL); // 길이와 방향으로 모드 설정
            result = result + step; 
            steps++; 
        }

        // 목표 지점에 도달한 후의 결과 출력
        cout << steps << " 걸음 후 주체는 다음 위치에 있습니다:\n";
        cout << result << '\n'; // 
        result.polar_mode(); // 
        cout << " 또는\n" << result << '\n'; 
        cout << "걸음당 평균 거리 = " << result.magval() / steps << '\n'; 

        steps = 0;
        result.reset(0.0, 0.0); 

        cout << "목표 거리를 입력하십시오 (종료하려면 q): ";
    }

    cout << "안녕히 가세요!\n";

    cin.clear(); 
    while (cin.get() != '\n') 
        continue;

    return 0; 
}
