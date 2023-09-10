#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x = i+1;
        for(int j=0;j<2*n-1;j++){
            if((n-i-1 <= j) && (n-1+i) >= j){
                cout<<x<<"\t";
                if(j < n-1)x++;
                else x--;
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}