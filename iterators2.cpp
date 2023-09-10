#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    for(auto &f:v){
        f = f + 1;
        cout<<f<<" ";
    }cout<<endl;
    for(auto i : v)cout<<i<<" "; 
    cout<<endl;
return 0;
}