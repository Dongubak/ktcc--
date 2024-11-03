#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main()
{
    arr.resize(100,0);
    int i = 0;
    for (auto & a = arr : 100 ){
        a = i++;
    }
    for (auto & a = arr : 100 ){
        cout << a;
    }

        
}
