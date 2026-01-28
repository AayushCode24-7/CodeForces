#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> cnt(100001, 0);

    int x;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }

    vector<long long> dp(mx + 1, 0);

    dp[0] = 0;
    dp[1] = cnt[1] * 1;

    for (int i = 2; i <= mx; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    }

    cout << dp[mx] << "\n";
    return 0;
}
