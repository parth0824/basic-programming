#include<bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;

    int s = size;

    int arr[1000];

    for(int i=0;i<size;i++) cin>>arr[i];

    (size % 2 == 0)? size:size -= 1;

    for(int i=0;i<size;i++){
        swap(arr[i],arr[i++]);
    }

    for(int i=0;i<s;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}