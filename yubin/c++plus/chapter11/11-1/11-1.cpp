// 사용자로 부터 목표거리와 보폭수를 목표까지 도달할떄까지 입력하고 각 걸음마다의 위치와 결과를 저장, 
//목표지점까지의 걸음수 평균이동을 파일에 저장
#include <iostream>
#include <cstdlib>		
#include <ctime>		
#include <fstream>
#include <cstdlib>
#include "vect.h"
using namespace std;

int main()
{
	using VECTOR::Vector;
	srand(time(0));	
	double direction; //방향
	Vector step;   //걸음 벡터
	Vector result(0.0, 0.0); //현재 위치 벡터
	unsigned long steps = 0; // 총걸음수
	double target; //목표 거리
	double dstep; //걸음당 거리
	ofstream fout("randwalk.txt");

	if(!fout.is_open())
	{
		cerr << "출력을 위해 randwalk.txt 파일을 열 수 없습니다.\n";
		exit(1);
	}

	cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	while (cin >> target)
	{
		cout << "보폭을 입력하십시오: ";
		if (!(cin >> dstep))
			break;
		fout << "목표거리: " << target << ", 보폭: " << dstep << '\n';
		fout << steps << ": " << result << '\n';

		while (result.magval() < target) //목표거리 도달까지 반복
		{			
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;			

			fout << steps << ": " << result << '\n';
		}
		fout << steps << " 걸음 후 술고래가 서 있는 위치\n";
		fout << result << '\n';
		result.polar_mode();
		fout << " 또는\n" << result << '\n';
		fout << "걸음당 기둥에서 벗어난 평균 거리 = "
			 << result.magval()/steps << '\n';
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다.\n";

	fout.close();
	return 0;
}
