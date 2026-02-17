#include <iostream>
using namespace std;

int main() {
    // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0; // Check if input exists

    while(t--) {
        long long s, k, m;
        if (!(cin >> s >> k >> m)) break;

        long long top0 = s;
        // Simplified top1 logic: 
        // If this represents a flip between s and another state
        long long top1 = (k >= s) ? s : k; 

        long long n = m / k;
        long long top_after_flips = (n % 2 == 0) ? top0 : top1;

        long long deltaT = m % k; // Same as m - (n * k)
        
        long long final_result;
        if (deltaT >= top_after_flips) {
            final_result = 0;
        } else {
            final_result = top_after_flips - deltaT;
        }

        cout << final_result << "\n";
    }
    return 0;
}