// RTTI 사용
#include <iostream>
#include "sales.h"
using namespace std;
int main()
{
  

    double vals1[12] =
    {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] =
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 35
    };

    Sales sales1(2004, vals1, 12);
    LabeledSales sales2("Blogstar", 2005, vals2, 12);
    LabeledSales::nbad_index *ls;

    cout << "첫 번째 try 블록:\n";
    try
    {
        int i;
        cout << "Year = " << sales1.Year() << '\n';
        for (i = 0; i < 12; ++i)
        {
            cout << sales1[i] << ' ';
            if (i % 6 == 5)
                cout << '\n';
        }
        cout << "Year = " << sales2.Year() << '\n';
        cout << "Label = " << sales2.Label() << '\n';
        for (i = 0; i <= 12; ++i) // 잘못된 인덱스 접근
        {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << '\n';
        }
        cout << "try 블록 1의 끝.\n";
    }
    catch (Sales::bad_index &bad)
    {
        cout << bad.what();

        if ((ls = dynamic_cast<LabeledSales::nbad_index *>(&bad)))
        {
            if (typeid(LabeledSales::nbad_index) == typeid(bad))
            {
                cout << "Company: " << ls->label_val() << '\n';
            }
        }

        cout << "잘못된 인덱스: " << bad.bi_val() << '\n';
    }

    cout << "\n다음 try 블록:\n";
    try
    {
        sales2[2] = 37.5;    // 정상 동작
        sales1[20] = 23345;  // 잘못된 인덱스 접근
        cout << "try 블록 2의 끝.\n";
    }
    catch (Sales::bad_index &bad)
    {
        cout << bad.what();

        // dynamic_cast를 사용해 bad가 LabeledSales::nbad_index 타입인지 확인합
        if ((ls = dynamic_cast<LabeledSales::nbad_index *>(&bad)))
        {
            if (typeid(LabeledSales::nbad_index) == typeid(bad))
            {
                cout << "Company: " << ls->label_val() << '\n';
            }
        }

        cout << "잘못된 인덱스: " << bad.bi_val() << '\n';
    }

    cout << "프로그램을 종료합니다.\n";
    return 0;
}
