#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(((i>n/2) && (i-j <=n/2) && (i+j)<=(n/2+n-1)) || ((i <= n/2) && (n/2-i <= j) && (n/2+i >= j))){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }cout<<endl;
    }
}
