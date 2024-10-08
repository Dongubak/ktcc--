// 구조체배열을 사용하고 fill에는 구조체 배열을 포인터로
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char * snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses {
    double season_expenses[Seasons];
};

void fill(struct expenses * costs) {
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << "에 소요되는 비용: ";
        cin >> costs->season_expenses[i];
    }
}

void show(struct expenses costs) {
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << ": $" << costs.season_expenses[i] << '\n';
        total += costs.season_expenses[i];
    }
    cout << "총비용: $" << total << '\n';
}

int main() {
    expenses new_expenses = {};
    fill(&new_expenses);
    show(new_expenses);
    return 0;
}

