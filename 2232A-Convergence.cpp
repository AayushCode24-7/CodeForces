#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long mid = a[n / 2];
    
    int l = lower_bound(a.begin(), a.end(), mid) - a.begin();
    int r = a.end() - upper_bound(a.begin(), a.end(), mid);
    
    cout << max(l, r) << "\n";
}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}