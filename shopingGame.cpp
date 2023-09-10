#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;cin>>t;
    while(t--){
        int a,h;cin>>a>>h;int b=1;bool c = 0;
        while(a != 0 || h != 0){
            if(c == 0){
                a = a - b;
                b++;
                c = 1;
                if(a < 0){
                    cout<<"Harshit";break;
                }
            }
            else if(c == 1){
                h = h - b;
                b++;
                c = 0;
                if(h < 0){
                    cout<<"Aayush";break;
                }
            }
        }
    }
}