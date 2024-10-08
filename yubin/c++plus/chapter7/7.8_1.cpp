//4개의 달 에 소모되는 비용 합 구하기. 포인터배열 사용해서
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char * snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double costs[]) {
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << "에 소요되는 비용: ";
        cin >> costs[i];
    }
}

void show(const double costs[]) {
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << ": $" << costs[i] << '\n';
        total += costs[i];
    }
    cout << "총비용: $" << total << '\n';
}

int main() {
    double expenses[4];
    fill(expenses);
    show(expenses);
    return 0;
}

