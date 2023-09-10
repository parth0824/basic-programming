#include <bits/stdc++.h>
using namespace std;
void callfunction(int n,int k,vector<bool> o,int index,string s,vector<int> x,vector<vector<int>> &ans){
    if(x.size() == k){
        ans.push_back(x);
        return ;
    }
    for(int i=index;i<n;i++){
        if(o[i] == 0){
            o[i] = 1;
            x.push_back(i+1);
            callfunction(n,k,o,i+1,s+to_string(i+1)+" ",x,ans);
            o[i] = 0;
            x.pop_back();
        }
    }
}
int main(){
    int n,k;cin>>n>>k;
    vector<bool> o;
    for(int i=0;i<n;i++)o.push_back(0);
    vector<vector<int>> ans;
    vector<int> x;
    callfunction(n,k,o,0,"",x,ans);
    for(auto i : ans){
        for(auto j : i)cout<<j<<" ";
        cout<<endl;
    }
return 0;
}


// class Solution {
// public:
//     void callfunction(int n,int k,vector<bool> o,int index,vector<int> x,vector<vector<int>> &ans){
//         if(x.size() == k){
//             ans.push_back(x);
//             return ;
//         }
//         for(int i=index;i<n;i++){
//             if(o[i] == 0){
//                 o[i] = 1;
//                 x.push_back(i+1);
//                 callfunction(n,k,o,i+1,x,ans);
//                 o[i] = 0;
//                 x.pop_back();
//             }
//         }
//     }
//     vector<vector<int>> combine(int n, int k) {
//         vector<bool> o;
//         for(int i=0;i<n;i++)o.push_back(0);
//         vector<vector<int>> ans;
//         vector<int> x;
//         callfunction(n,k,o,0,x,ans);
//     return ans;
//     }
// };