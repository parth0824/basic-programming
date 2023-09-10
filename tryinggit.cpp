#include <bits/stdc++.h>
using namespace std;    
void maxScore(vector<int>&arr, int k) {

    int a,b;a=b=0;
    int i =0;
    while(i < k){
        a += arr[i];
        i++;
    }
    // cout<<k<<endl;
    i = arr.size()-1;int t=0;
    while(t < k){
        t++;
        cout<<arr[i]<<" ";
        b += arr[i];
        i--;
    }
        cout<<endl<<a<<" "<<b<<endl;
            int x = 0;
    for(int i=0;i<arr.size();i++){
        arr[i] += x;
        x = arr[i];
    }


    



}
int main(){
    vector<int> v = {1,2,3,4,5,6,1};
    maxScore(v,3);
return 0;
}