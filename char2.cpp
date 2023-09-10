#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // cout<<s<<endl;
    int a = s.length() - 1;
    int i = 0;
    while(i < a){
        swap(s[i++],s[a--]);
    }
    cout<<s<<endl;
return 0;
}