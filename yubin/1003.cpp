#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, N;
    cin >> T;

    vector<int> count0(41);
    vector<int> count1(41);

    count0[0] = 1;
    count1[0] = 0;
    count0[1] = 0;
    count1[1] = 1;

    for (int i = 2; i <= 40; i++) {
        count0[i] = count0[i-1] + count0[i-2];
        count1[i] = count1[i-1] + count1[i-2];
    }
    
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << count0[N] << " " << count1[N] << '\n';
    }

    return 0;
}
