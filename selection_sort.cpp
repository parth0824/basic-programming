#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<"BEFORE----------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(b[i] > b[j]){
                int tem = b[i];
                b[i] = b[j];
                b[j] = tem;
            }
        }
    }
    cout<<"AFTER----------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}