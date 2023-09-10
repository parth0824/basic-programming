#include <bits/stdc++.h>
using namespace std;
void convert(string &s,int i,int &ans){
    if(i == s.size())return ;
    ans = (ans*10) + (s[i]-48);
    convert(s,i+1,ans);
}
int main(){
    string s;cin>>s;
    int ans = 0;
    convert(s,0,ans);
    cout<<ans<<endl;
return 0;
}