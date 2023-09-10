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

int x = 0;
vs aans;
void printSubsequences(string s,int index,string ans){
    aans.pb(ans);
    cout<<ans<<" ";
    x++;
    if(index == s.size())return ;

    for(int i=index;i<s.size();i++){    
        printSubsequences(s,i+1,ans+s[i]);
    }
}
int main(){
    string s;cin>>s;
    printSubsequences(s,0,"");
    reverse(aans.begin(),aans.end());
    cout<<endl;
    for(auto i : aans)cout<<i<<" ";
    cout<<x<<endl;

return 0;
}