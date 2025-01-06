#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int Limit = 100;

int main(int argc, char * argv[])
{
	char input[Limit];

    if (argc < 2)
    {
        cerr << "사용방법: " << argv[0]
             << " 파일이름\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(argv[1], ios_base::app | ios_base::out); //파일 열고 출력모드
    if (!fout)
    {
        cerr  << argv[1] << "파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    
	cout << "저장할 문자열을 입력하십시오: ";
	cin.getline(input, Limit);

    for(int i = 0; input[i]; i++)
        fout << input[i];
    return 0;
}
