#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void print(int n,int s){
    if(s > n)return ;
    ans.push_back(s);
    for(int i=0;i<=9;i++){
        if(s == 0 && i == 0)continue;
        print(n,s*10 + i);
    }
}
int main(){
    int n;cin>>n;
    int s = 0;
    print(n,s);
    for(auto i : ans){
        cout<<i<<endl;
    }
return 0;
}