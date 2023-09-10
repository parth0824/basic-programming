#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int a,int b[],int key){
    for(int i=0;i<a;i++){
        if(key == b[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int key;cin>>key;
    cout<<linearSearch(a,b,key)<<endl;
}
