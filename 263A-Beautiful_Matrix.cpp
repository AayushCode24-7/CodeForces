#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int x;
    int a,b;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){

            cin >> x;
            if(x==1){
                a=i;
                b=j;    
            }  
        } 
    }
    cout << abs (a-2) + abs (b-2)<<endl;
    return 0;
}
