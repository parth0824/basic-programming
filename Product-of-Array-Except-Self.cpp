#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    vector<int> f,b;
    int x = 1;
    for(int i=0;i<v.size();i++){
        f.push_back(x * v[i]);
        x *= n[i]
    }
}