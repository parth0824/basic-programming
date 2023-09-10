#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define um unordered_map<int,int>
bool d = 0;
set<vector<int>> s;
void printPermutaion(vi v,vvi &ans,vector<bool> b,vi help){
    if(help.size() == v.size()){
        s.insert(help);
        return ;
    }
    for(int i=0;i<v.size();i++){
        if(b[i] == 0){
            b[i] = 1;
            help.push_back(v[i]);
            printPermutaion(v,ans,b,help);
            b[i] = 0;
            help.pop_back();
        }
    }
}
int main(){
    int n;cin>>n;
    vi v;
    vector<bool> b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        b.push_back(0);
    }
    vvi ans;
    vi help;
    printPermutaion(v,ans,b,help);
    for(auto i:s){
        for(auto j:i)
        help.push_back(j);
        ans.push_back(help);
        help.clear();
    }
    for(auto i:ans){
        for(auto j:i)cout<<j<<" ";cout<<endl;
    }

return 0;
}
