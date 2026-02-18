// 1A-Theatre.cpp

#include <iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long total_length=(n+a-1)/a;
    long long total_width=(m+a-1)/a;
    cout<<total_length*total_width<<endl;
    return 0;
}

// Logic: n, m, a are given in the test cases so we just need to divide a with m and n separately and then just multiply the final m and n..