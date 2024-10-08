//box 구조체가 주어지고 구조체 값을받아 출력, 주소를 전달받아 volunme 곱
#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void print_box(box box_sample)
{
	cout << "maker: " << box_sample.maker << "\n" ;
	cout << "height: " << box_sample.height << "\n";
	cout << "width: " << box_sample.width << "\n";
	cout << "length: " << box_sample.length << "\n";
	cout << "volume: " << box_sample.volume << "\n";
	cout << "\n";
}

void cal_volume(box * box_sample)
{
	box_sample->volume = box_sample->height * box_sample->width * box_sample->length;
}


int main()
{
	box coupang_box = {"배달박스", 30.1, 20.1, 10.1, 0};
	cal_volume(&coupang_box);
	print_box(coupang_box);
	return 0;
}
