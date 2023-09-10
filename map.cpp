#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,char> m;
    int size;cin>>size;
    for(int i=0;i<size;i++){
        int x;char y;
        cin>>x>>y;
        m[x] = y; 
    }
    // methord 1
    map<int,char> :: iterator it;
    for(auto it=m.begin();it != m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    // methord 2
    // for(auto it = m.begin();it != m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // methord 3
    // for(auto it:m){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
}