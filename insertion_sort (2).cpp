#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<"BEFORE-------------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
    for(int i=1;i<a;i++){
        int x = b[i];
        int j = i - 1;
        while(b[j] > x && j >= 0){
            b[j+1] = b[j];
            j--;
        }
        b[j+1]=x;
    }
    cout<<"AFTER-------------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}
