#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to check if a number is a palindrome
bool is_palindrome(long long x) {
    if (x < 0) return false;
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

void solve() {
    long long n;
    cin >> n;

    // Strategy 1: Check small values of b (where a is very close to n)
    // Checking up to 2000 multiples of 12 is fast and covers small deviations
    for (int i = 0; i <= 2000; ++i) {
        long long b = 12LL * i;
        if (b > n) break;
        long long a = n - b;
        if (is_palindrome(a)) {
            cout << a << " " << b << "\n";
            return;
        }
    }

    // Strategy 2: Check uniform palindromes (e.g., 111..., 222...) for a
    // where b takes up the remainder of n.
    for (int len = 1; len <= 18; ++len) {
        for (int d = 1; d <= 9; ++d) {
            // Construct the palindrome string of digit d repeated 'len' times
            string s(len, '0' + d);
            long long a = stoll(s);
            
            if (a <= n) {
                long long b = n - a;
                if (b % 12 == 0) {
                    cout << a << " " << b << "\n";
                    return;
                }
            }
        }
    }

    // Also explicitly check if a = 0 works (0 is a palindrome)
    if (n % 12 == 0) {
        cout << 0 << " " << n << "\n";
        return;
    }

    cout << -1 << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}