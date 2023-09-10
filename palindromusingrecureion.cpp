#include <bits/stdc++.h>
using namespace std;
bool check(string s,int i){
    if(i >  s.size()/2){
        return true;
    }
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    bool chk = check(s,i+1);
    return chk;
}
int main(){
    string s;cin>>s;
    cout<<check(s,0);
}