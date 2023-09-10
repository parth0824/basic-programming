#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int y = n-1+n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((((i > n/2) && (j <= i-n/2)) || ((i > n/2) && (i+j >= y)) )|| ((n/2 - i >= j) || ((j > n/2) && (n/2+i <= j)) )){
                cout<<"*   ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }
} 