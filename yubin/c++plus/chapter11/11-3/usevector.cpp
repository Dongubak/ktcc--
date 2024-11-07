// N 번의 실험을 통해 최대 걸음 수, 최소 걸음 수, 평균 걸음 수를 계산합니다.
#include <iostream>
#include <cstdlib>      
#include <ctime>     
#include "vector.h"
using namespace std;

int main()
{
    using VECTOR::Vector;
    srand(time(0));

    double direction; 
    Vector step;
    Vector result(0.0, 0.0); // 현재 위치를 나타내는 벡터
    unsigned long steps = 0; // 걸음 수를 저장할 변수
    double target; // 목표 거리
    double dstep; // 보폭
    int n; // 실험 횟수
    long min; // 최소 걸음 수
    long max; // 최대 걸음 수
    long total = 0; // 전체 걸음 수 합계

    cout << "시도할 회수를 입력하십시오: ";
    cin >> n;
    cout << "목표 거리를 입력하십시오: ";
    cin >> target;
    cout << "보폭을 입력하십시오: ";
    cin >> dstep;

    // N번의 실험 수행
    for (int i = 0; i < n; i++)
    {
        // 목표 거리에 도달할 때까지 반복
        while (result.magval() < target)
        {
            direction = rand() % 360; 
            step.set(dstep, direction, 'p'); //극좌표로 보폭과 방향 벡터 설정
            result = result + step; // 현재 위치에 이동 벡터를 더함
            steps++; // 걸음 수 증가
        }

        cout << "\n" << i + 1 << "번 째 시도\n";
        cout << steps << " 걸음 걸은 후 술고래의 현재 위치:\n";
        cout << result << "\n"; 
        result.polar_mode(); // 극 좌표 모드
        cout << " 또는\n" << result << "\n";
        cout << "걸음당 기둥에서 벗어난 평균 거리 = "
             << result.magval() / steps << "\n";

        if (i == 0)
            min = max = steps;
        else
        {
            if (min > steps)
                min = steps;
            if (max < steps)
                max = steps;
        }

        total += steps;

        steps = 0;
        result.set(0.0, 0.0);
    }

    cout << "\n" << n << "번 시도했을 때\n";
    cout << "최소 걸음 수: " << min << "\n"
         << "최대 걸음 수: " << max << "\n";
    cout << "평균 걸음 수: " << total / n << "\n";

    cout << "프로그램을 종료합니다.\n";
    return 0;
}