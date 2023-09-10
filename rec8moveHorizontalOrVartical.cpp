#include <bits/stdc++.h>
using namespace std;
void move(int n,int m,string ans){
    if(n == 0 && m == 0){
        cout<<ans<<endl;
        return ;
    }
    if(n < 0){
        return;
    }
    if(m < 0){
        return;
    }
    // cout<<ans<<endl;
    move(n-1,m,ans+'h');
    move(n,m-1,ans+'v');
    move(n-1,m-1,ans+'d');
}
int main(){
    int h,v;cin>>h>>v;
    string ans="";
    move(v-1,h-1,ans);
return 0;
}