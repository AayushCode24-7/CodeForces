// Watermelon Problem Solution-#4A

#include <iostream>
using namespace std;
int main(){
    int w;
    cout << "Enter The Weight Of The Watermelon: ";
    cin >> w;

    if(w % 2 == 0 && w>2)
        cout<<"YES"<<endl;
    else
        cout<< "NO" << endl;
    return 0;
}
// 