#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char * argv[])
{

    if (argc < 3)
    {
        cerr << "사용법: " << argv[0]
            << " 원본파일 대상파일\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin(argv[1]); // 읽기 모드로 열기
    if (!fin)
    {
        cerr << argv[1] << " 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout(argv[2]); // 쓰기 모드로 열기
    if (!fout)
    {
        cerr << argv[2] << " 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    while (fin.get(ch))
        fout << ch;
    cout << argv[1] << "의 내용을 " << argv[2] << "로 복사했습니다.\n";
    fin.close();
    fout.close();
    return 0;
}
