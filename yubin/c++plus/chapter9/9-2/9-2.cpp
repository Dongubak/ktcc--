// string 객체 사용해서 변경하기 , 문자열 카운트
#include <iostream>
#include <string>
using namespace std; 

void strcount(const string str)
{
	static int total = 0;		// 정적 지역 변수
	int count;			// 자동 지역 변수

	cout << "\"" << str <<"\"에는 ";
	for(count = 0 ; str[count] != '\0'; count++);	// 문자열의 끝까지 카운트

	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}


int main()
{
	string str;

	cout << "영문으로 입력하시오: " << "\n";

	while (1)
	{
		getline(cin, str);
		if(str[0] == '\0') 
			break;
		strcount(str);
		cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력):\n";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
