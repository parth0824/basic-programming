#include <bits/stdc++.h>
using namespace std;
int main (){int x = 1;
    int n;cin>>n;
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            if(((i == (2*n)-2) || (((i>= n) && ((j<=i-n+1))) || ((i>=n)&&((i+j)>=((n-1)+(2*n)-2))))) || ((i == 0) || ((j < n-i) || (n+i-1) <= j))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
