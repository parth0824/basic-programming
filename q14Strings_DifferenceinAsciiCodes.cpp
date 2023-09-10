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
 
int main(){
    string s;cin>>s;
    string ans = "";
    int i = 0;
    while(i < s.size()-1){
        int x = s[i+1] - s[i];
        ans += s[i];
        ans += to_string(x);


i++;
        
    }ans += s[s.size()-1];
    cout<<ans<<endl;
return 0;
}