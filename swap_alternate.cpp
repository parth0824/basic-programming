#include <bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++) cin>>arr[i];
    for(int i=0;i<size-1;i++) swap(arr[i],arr[i++]);
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
return 0;
}