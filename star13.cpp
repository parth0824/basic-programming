#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if(((2*i+1) >= j) && ((n-i-1) <= j)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}