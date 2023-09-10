#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvb vector<vector<bool>>
#define um unordered_map<int,int>
#define us unordered_set<int>
#define umc unordered_map<char,int>
 
int main(){
    string str;cin>>str;
    umc u;
    for(int i=0;i<str.size();i++){
        u[str[i]]++;
    }
    int m = INT_MIN;
    char ans;
    for(auto i : u){
        if(m < i.second){
            ans = i.first;
            m = i.second;
        }
    }
    cout<<ans<<endl;

return 0;
}