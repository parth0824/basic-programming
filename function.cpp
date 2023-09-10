#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int c = INT_MIN;
    int d = INT_MAX;
    for(int i=0;i<a;i++){
        c = max(c,b[i]);
        d = min(d,b[i]);
    }
    cout<<"MAX:"<<c<<endl;
    cout<<"MIN:"<<d<<endl;
}