#include <bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[1000];
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
        (max < arr[i]) ? max = arr[i] : 1;
        (min > arr[i]) ? min = arr[i] : 1;
    }
    cout<<"MAX:"<<max<<endl;
    cout<<"MIN:"<<min<<endl;
    return 0;
}