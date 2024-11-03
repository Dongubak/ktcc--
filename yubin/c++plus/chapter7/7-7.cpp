// fill_array는 배열의 마지막 원소의 주소를 전달받고, 나머지는 배멸 원소의 포인터를 매개변수로 받음.
#include <iostream>
#include <vector>
#define it vector<double>::iterator
using namespace std;
const int MAX = 5;


it fill_array(it begin, it end)
{
	double temp;
	it pt;
	int i = 0;
	for (pt = begin; pt != end; pt++)
	{
		cout  << ++i << "번 부동산의 가격: $";
		cin >> temp;
		if (!cin)		// 입력 불량
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
			break;
		}
		else if (temp < 0)
			break;
		*pt = temp;
	}
	return pt;
}

void show_array(const it begin, const it end)
{
	it pt;
	int i = 0;
	for (pt = begin; pt != end; pt++)
	{
		cout << ++i << "번 부동산: $";
		cout << *pt << "\n";
	}
}

void revalue(it begin, it end)
{
	it pt;
	cout << "재평가율을 입력하십시오: ";
	double factor;
	cin >> factor;
	for (pt = begin; pt != end; pt++)
		*pt *= factor;
}

int main()
{
	vector<double> properties(MAX, 0);

	it end = fill_array(properties.begin(), properties.end());
	show_array(properties.begin(), end);
	revalue(properties.begin(), end);
	show_array(properties.begin(), end);
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

