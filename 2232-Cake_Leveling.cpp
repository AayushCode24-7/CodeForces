#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long prefix_sum = 0;
    long long max_possible_height = a[0];
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += a[i];
        long long local_h = prefix_sum / (i + 1);
        
        max_possible_height = min(max_possible_height, local_h);
        
        cout << max_possible_height << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}