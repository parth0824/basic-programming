#include <bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[100]; 
    for(int i=0;i<size;i++) cin>>arr[i];
    int l = size - 1;
    int i = 0;
    while(i < l) swap(arr[i++],arr[l--]);
    for(int i=0;i<size;i++) cout<<arr[i]<<"  ";
return 0;
}