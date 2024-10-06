//strcmp()함수

#include <iostream>
#include <cstring>   
using namespace std;;
int main()
{
	char word[100];
	int count = 0;

	cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

	while (1)
    {
        cin >> word;
        if (strcmp(word, "done") == 0)
            break;
        ++count;
    }
	cout << "총 " << count << " 단어가 입력되었습니다.\n";
	return 0;
}