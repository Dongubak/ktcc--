#include <iostream>
#include <utility>
#include <type_traits>
#include <typeinfo>
#include <cxxabi.h>
using namespace std;

int main()
{
    const auto M = 3;
    const auto N = 2;

    auto arr2d = new double[M][N];

    arr2d[0][0] = 2;
    arr2d[1][0] = 3;
    arr2d[2][0] = 9;
    arr2d[0][1] = 4;
    arr2d[1][1] = 5;
    arr2d[2][1] = 8;

    delete[] arr2d;
    arr2d = new double[M][N];

    for(int r = 0; r < M; r++)
    {
        for(int c = 0; c < N; c++)
            cout << arr2d[r][c] << " ";
        cout << "\n";
    }
    cout << "\n";

    delete[] arr2d;

    arr2d = new double[M][N]();

    for(int r = 0; r < M; r++)
    {
        for(int c = 0; c < N; c++)
            cout << arr2d[r][c] << " ";
        cout << "\n";
    }

    int info;
    cout << abi::__cxa_demangle(typeid(arr2d).name(),0,0,&info) << "\n";

    return 0;
}