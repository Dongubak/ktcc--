// 위도 구하기, 도 분 초와 , 위도 출력

#include <iostream>

int main()
{
	using namespace std;

	int degrees;
	int minutes;
	int seconds;
	double latitude;
	const float SECS_PER_MIN = 60.0;
	const float MINS_PER_DEG = 60.0;

	cout << "위도를 도, 분, 초 단위로 입력:\n";
	cout << "먼저, 도각을 입력하시오:\n ";
	cin >> degrees;
	cout << "다음에, 분각을 입력하시오:\n ";
	cin >> minutes;
	cout << "끝으로, 초각을 입력하시오:\n ";
	cin >> seconds;
	latitude = degrees + (minutes + seconds / SECS_PER_MIN)/MINS_PER_DEG;
	cout << degrees << "도, " << minutes << "분, "<< seconds << "초 = " << latitude << "도\n";
	return 0;
}
