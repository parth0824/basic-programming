#include <bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[100]; 
    for(int i=0;i<size;i++) cin>>arr[i];

    if(size % 2 == 0)
    for(int i=0;i<size;i++) swap(arr[i],arr[i++]);
    else 
    for(int i=0;i<size-1;i++) swap(arr[i],arr[i++]);


    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<"\nFinished"<<endl;
return 0;
}