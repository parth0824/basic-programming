#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int a = 2;
    int i,j;i=j=0;
    int x = 0;
    while(a >= 1){
        a--;
        while(j < n){
            cout<<arr[i][j]<<" ";
            j++;
        }
        i++;
        j--;
        while(i < m){
            cout<<arr[i][j]<<" ";
            i++;
        }
        i--;
        j--;
        while(j >= 0){
            cout<<arr[i][j]<<" ";
            j--;
        }
        j++;
        i--;
        while(i >= 0){
            cout<<arr[i][j]<<" ";
            i--;
        }
        i++;
        j++;

    }
}
int main(){
    solve();
return 0;
}