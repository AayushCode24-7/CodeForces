#include <iostream>
using namespace std;

int main() {
    int t;

    if (!(cin >> t)) return 0;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        bool x = (n == a && a == b);
        bool y = (a + b <= n - 2);

        if (x || y) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
