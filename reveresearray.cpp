#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        int help;cin>>help;
        arr[i] = help;
    }
    int half = size-1;
    int i = 0;
    while(half >= size/2){
        swap(arr[i],arr[half]);
        half--;
        i++;
    }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}