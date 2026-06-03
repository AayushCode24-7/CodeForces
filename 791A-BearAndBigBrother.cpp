#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b) {
        a *= 3;  // Limak's weight triples
        b *= 2;  // Bob's weight doubles
        years++;
    }

    cout << years << "\n";

    return 0;
}