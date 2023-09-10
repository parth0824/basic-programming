#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of array:";
    int size; cin>>size;
    int arr[1000];
    cout<<"enter the array:";
    for(int i=0;i<size;i++)cin>>arr[i];
    sort(arr,arr+size);
    int key;cout<<"enter the key:"; cin>>key;
    int s = 0;
    int l = size - 1;
    while(s <= l){
        int mid = s + (l-s)/2;
        if(arr[mid] == key){
            cout<<"key found at index:"<<mid<<endl;
            return 0;
        }
        else if(arr[mid] > key){
            l = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
    }
    cout<<"key is not found"<<endl;
return 0;
}