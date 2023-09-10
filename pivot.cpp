#include <bits/stdc++.h>
using namespace std;
int pivot(int a,int b[]){
    int s = 0;
    int l = a - 1;
    int m;
    while(s < l){
        m = s + (l - s)/2;
        if(b[m] >= b[0]){
            s = m + 1;
        }
        else {
            l = m;
        }
        return m;
    }
}
int main() {
    int a; cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<pivot(a,b)<<endl;
return 0;
}
// 89469454963