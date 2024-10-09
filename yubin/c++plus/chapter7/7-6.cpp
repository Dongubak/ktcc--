//Fill_array : double형 배열 전달인자, Show_array  내용출력, Reverse 순서 뒤집기
#include <iostream>
using namespace std;

int Fill_array(double array[], int size)
{
	int count = 0;
	for (int i = 0; i < Size; i++) {
		cout << i + 1 << "번째 원소: ";
		if (!(cin >> array[i])){
            break;
        }
		count++;
	}
	return count;
}
void Show_array(double array[], int count)
{
	for (int i = 0; i < count; i++){
		cout << array[i] << "\t";
	}
	cout << "\n";
}

void Reverse_array(double array[], int count)
{
	int temp;
	for (int i = 0,  j = count - 1; i < j; i++, j--) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

int main()
{
	int Size;
	cin >> Size;
	double array[Size];
	int count = Fill_array(array, Size);
	Show_array(array, count);
	Reverse_array(array, count);
	Show_array(array, count);
	Reverse_array(array + 1, count - 2);
	Show_array(array, count);
	return 0;
}

