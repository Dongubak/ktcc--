// 골프스코어 10개를 배열 3개 써서 입력받고 출력
#include <iostream>
using namespace std;
const int Max = 10;

int input_score(int scores[], int maxcount)
{
	cout << "끝내려면 q를 입력하십시오.\n";
	
	cout << "점수 #1: ";
	int i = 0;
	while (cin >> scores[i])
	{
		if (i++ < maxcount){
			cout << "점수 #" << i+1 << ": ";
		}
	}
	return i;
}

double Avg(int scores[], int count)
{
	int sum = 0;
	double avg;

	for (int i = 0; i < count; i++){
        sum += scores[i];
    }
	avg = sum / count;
	return avg;
}

int output_score(int scores[], int count)
{
	if (count == 0)
	{
		cout << "입력된 점수가 없습니다.\n";
	}
		
	for (int i = 0; i < count; i++){
		cout << scores[i] << "\t";
	}
	cout << "평균 점수: " << Avg(scores, count) << "\n";
	return 0;
}


int main()
{
	int score_arry[Max];

	int count = input_score(score_arry, Max);
	output_score(score_arry, count);

	return 0;
}
