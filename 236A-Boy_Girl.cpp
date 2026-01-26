#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string t;
    cin>>t;

    set <char> distinct_char;
    for (char s:t){
        distinct_char.insert(s);
    }

    if (distinct_char.size() % 2 == 0) {
        cout<<"CHAT WITH HER!"<<endl;

        }
        else {cout<<"IGNORE HIM!"<<endl;
        }
    return 0;
}