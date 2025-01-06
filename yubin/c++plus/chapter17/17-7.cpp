#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

void ShowStr(const string & s)
{
    cout << s << '\n';
}

void GetStrs(istream & is, vector<string> & vs)
{
    string temp;
    size_t len;

    while (is.read((char *) &len, sizeof(size_t)) && len > 0) // 문자열 길이 읽기
    {
        char ch;
        temp = "";
        for (int j = 0; j < len; j++) // 길이만큼 문자를 읽어 문자열 구성
        {
            if (is.read(&ch, 1))
            {
                temp += ch;
            }
            else
                break;
        }
        if (is)
            vs.push_back(temp); // 완성된 문자열을 벡터에 추가
    }
}

class Store
{
public:
    ostream & os;
    Store(ostream & o) : os(o) {}
    void operator()(const string &s);
};

int main()
{
    vector<string> vostr;
    string temp;

    // 문자열 입력 받기
    cout << "문자열을 입력하세요 (빈 줄을 입력하면 종료됩니다):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "입력된 문자열입니다.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // 파일에 저장
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // 파일에서 내용 복원
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "입력 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\n파일에서 읽어온 문자열입니다:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}



void Store::operator()(const string &s)
{
    size_t len = s.size();
    os.write((char *)&len, sizeof(size_t)); // 문자열 길이를 기록
    os.write(s.data(), len);                // 문자열 내용을 기록
}


