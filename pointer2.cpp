#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl; 
    // cout<<*(arr + 9)<<endl;
    // cout<<*arr + 100<<endl;
    // cout<<(arr[3] + 9)<<endl;
    // cout<<&(arr+3) <<endl;
    int *ptr = &0[arr];
    cout<<(ptr)<<endl;
    cout<<(&ptr)<<endl;
    cout<<(*ptr); 
    // cout<<sizeof(ptr); 
return 0;
}