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
    s.push_back('0');
    int i=0;
    int j = 0;
    string ans = "";
    while(i < s.size()-1){
        if(s[i] == s[i+1]){
            j++;
        }
        else{
            ans += s[i];
            if(j != 0){
                ans += to_string(j+1);
            }
            j = 0;
        }
    i++;
    }
    // cout<<j<<endl;
    cout<<ans;
return 0;
}