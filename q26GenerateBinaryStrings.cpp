#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define umsi unordered_map<string,int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

void generateAllString(string &s,int i,string ans){
    if(i == s.size()){
        cout<<ans<<" ";
        return ;
    }

    if(s[i] != '?'){
        ans += s[i];
        generateAllString(s,i+1,ans);
    }
    else{
        ans += '0';
        generateAllString(s,i+1,ans);
        ans.pop_back();
        ans += '1';
        generateAllString(s,i+1,ans);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string ans = "";
        generateAllString(s,0,ans);
        cout<<endl;
    }

return 0;
}