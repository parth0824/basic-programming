#include <bits/stdc++.h>
using namespace std;
int main(){
    // int x;cin>>x;
    // vector<int> v;
    // for(auto i=0;i<x;i++){
    //     int a;cin>>a;
    //     v.push_back(a);
    // }
    // vector<int> :: iterator it;
    
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<++(*it)<<"  ";
    // }cout<<endl;
    // vector<int> a;
    // int b;cin>>b;
    // for(int i=0;i<b;i++){
    //     int c;cin>>c;
    //     a.push_back(c);
    // }
    // for(auto x:a)cout<<x<<" ";cout<<endl;
    // for(auto &x:a)cout<<++x<<" ";cout<<endl;
    // for(auto x:a)cout<<x<<" ";cout<<endl;


    vector<int> a;
    int b;cin>>b;
    for(int i=0;i<b;i++){
        int c;cin>>c;
        a.push_back(c);
    }
    for(auto it : a){
        cout<<(it+1)<<" ";
    }cout<<endl;
    for(auto it : a){
        cout<<it<<" ";
    }
    







return 0;
}