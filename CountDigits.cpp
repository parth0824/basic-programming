#include <bits/stdc++.h>
using namespace std;
int main (){
    long long int n,m;cin>>n>>m;
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    while(n != 0){
        int x = n % 10;
        a[x]++;
        n = n / 10;
    }
    cout<<a[m]<<endl;
return 0;
}