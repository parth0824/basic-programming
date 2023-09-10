#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int s = 0 ,l= n-1;
    int k;cin>>k;
    int m;
    while(s <= l){
        m = l-(l-s)/2;
        if(v[m] == k){
            break;
        }
        else if(v[m] < k){
            s = m + 1;
        }
        else{
            l = m -1;
        }
    }
    cout<<m<<endl;    
}
int main(){
    solve();
}