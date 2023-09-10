#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){int x;cin>>x;a.push_back(x);}
    vector<int> l;l.push_back(1);
    vector<int> h;h.push_back(1);
    for(int i=1;i<n;i++){
        l.push_back(l[i-1]*a[i]);
    }
    for(int i=n-2;i>=0;i--){
        h.push_back(h[i+1]*a[i]);
    }


}