// 1328A- Divisibility Problem
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (a % b == 0 ? 0 : b - (a % b)) << endl;
    }
    return 0;
}

// Logic :- we have divided 2 numbers a and b(a%b) and if we got a reminder after dividing them we will subtract it from a to find the required solution.
// But their is a issue if the reminder is 0 it will just show the value of a which will be wrong so we will use if else statement to avoid this error.