#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_set<int> u;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        u.insert(x);
    }
    int k;cin>>k;
    set<pair<int,int>> v;
    for(auto i:u){
        int x = k-i;
        auto y = u.find(x);
        if(y != u.end()){
            v.insert({i,(*y)});
        }
    }
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}