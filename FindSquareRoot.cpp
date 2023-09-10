#include<bits/stdc++.h>
using namespace std;

int squareRoot(long long int a) {
    long long int s=0;
    long long int l=a;
    double m;
    while(s <= l){
        m = (l - (l-s)/2);
        if((m*m) == a){
            return m;
        }
        else if((m*m) > a){
            l = m - 1;
        }
        else{
            s = m + 1;
        }
    }
    if(m*m > a) {
        return m-1;
    }
    else 
    return m;
}
void solve(){
    long long int n;cin>>n;
    cout<<squareRoot(n);
}
int main () {
    solve();
}