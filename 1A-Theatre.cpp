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

