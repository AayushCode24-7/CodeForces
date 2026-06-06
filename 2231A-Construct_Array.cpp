#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int solved_count = 0;
    
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        
        // Check if at least two friends are confident
        if (petya + vasya + tonya >= 2) {
            solved_count++;
        }
    }
    
    cout << solved_count << "\n";
    
    return 0;
}