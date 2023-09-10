#include <bits/stdc++.h>
using namespace std;
int binary_search(int a,int *b,int key){
    int s = 0, l = a - 1,m;
    for(int i=0;;i++){
        m = (s + l) / 2;
        if(s > l){
            break;
        }
        else if(key == b[m]){
            return m;
        }
        else if(key > b[m]){
            s = m +1;
        }
        else{
            l = m - 1;
        }
    }
    return -1;
}
int main(){
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++) cin>>b[i];
    int key;cin>>key;
    cout<<binary_search(a,b,key);
}