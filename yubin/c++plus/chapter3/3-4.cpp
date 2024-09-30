// 초를 주고 일, 시간, 분 , 초 구하기 ,long

#include <iostream>
using namespace std; 

int main()
{
	const int SECOND_TO_DAY = 86400;
	const int SECOND_TO_HOUR = 3600;
	const int MIN = 60;
	long all_sec, day, hour, min, second;

	cout << "총 초 수를 입력하시오: ";
	cin >> all_sec;

	day = all_sec / SECOND_TO_DAY;
	hour = (all_sec % SECOND_TO_DAY) / SECOND_TO_HOUR;
	min = (all_sec % SECOND_TO_HOUR) / MIN;
	second = all_sec % MIN;

	cout << all_sec << "초 = " << day << "일, " << hour << "시, " 
     << min << "분, " << second << "초";

    return 0;
}
