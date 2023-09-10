#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
     n--;
    for(int i=0;i<n;i++){
        swap(arr[i],arr[i++]);
    }
    for(auto i: arr)cout<<i<<" ";
return 0;
}