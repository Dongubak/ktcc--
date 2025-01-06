#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;

    // mat.dat 파일 열기
    ifstream mat("mat.dat");
    if (!mat.is_open())
    {
        cerr << "mat.dat 파일을 열 수 없습니다.\n";
        exit(1);
    }

    // pat.dat 파일 열기
    ifstream pat("pat.dat");
    if (!pat.is_open())
    {
        cerr << "pat.dat 파일을 열 수 없습니다.\n";
        exit(1);
    }

    // matnpat.dat 파일 열기
    ofstream matnpat("matnpat.dat");
    if (!matnpat.is_open())
    {
        cerr << "matnpat.dat 파일을 열 수 없습니다.\n";
        exit(1);
    }

    string temp;

    // Mat의 손님 리스트를 읽어와서 set에 저장
    set<string> mats;
    while (getline(mat, temp))
        mats.insert(temp);

    // Mat의 손님 리스트 출력
    ostream_iterator<string, char> out(cout, "\n");
    cout << "Mat의 손님 목록:\n";
    copy(mats.begin(), mats.end(), out);

    // Pat의 손님 리스트를 읽어와서 set에 저장
    set<string> pats;
    while (getline(pat, temp))
        pats.insert(temp);
    
    // Pat의 손님 리스트 출력
    cout << "\nPat의 손님 목록:\n";
    copy(pats.begin(), pats.end(), out);

    // Mat과 Pat의 손님 리스트를 합친 결과
    ostream_iterator<string, char> fout(matnpat, "\n");
    set<string> both;
    set_union(mats.begin(), mats.end(), pats.begin(), pats.end(),
        inserter(both, both.begin()));

    // 합친 손님 리스트 출력 및 파일 저장
    cout << "\n합쳐진 손님 목록:\n";
    copy(both.begin(), both.end(), out);
    copy(both.begin(), both.end(), fout);

    return 0;
}
