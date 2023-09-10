#include <bits/stdc++.h>
using namespace std;
void reverse(int p[],int l,int r){
    if(l > r)return ;
    swap(p[l],p[r]);
    reverse(p,l+1,r-1);
}
int main(){
    int n;cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++)cin>>p[i];
    reverse(p,0,n-1);
    for(int i=0;i<n;i++)cout<<p[i]<<" ";
}