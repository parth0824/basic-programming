#include <bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[1000];
    int sum = 0;
    for(int i=0;i<size;i++){
         cin>>arr[i];
         cout<<arr[i]<< "  ";
         sum = sum + arr[i];
    }cout<<endl;
    cout<<sum<<endl;
    return 0;
}