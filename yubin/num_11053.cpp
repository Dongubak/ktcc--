#include <iostream>
#include <vector>
#include <algorithm>

#define all(x) begin(x), end(x)
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> A(n, 0), dp(n, 0);

    for(int i = 0; i < n; i++) cin >> A[i];

    for(int i = 0; i < n; i++) {
        int tmax = 0;
        for(int j = i - 1; j >= 0; j--) {
            if(A[i] > A[j]) {
                tmax = max(tmax, dp[j]);
            }
        }

        dp[i] = tmax + 1;
    }

    cout << *max_element(all(dp));

    return 0;
}