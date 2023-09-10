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
    int i=0;

    while(i < s.size()){
        if(s[i] >= 65 && s[i] <= 91){
            s[i]  = s[i] + 32;
        }
        else{
            s[i] = s[i] - 32;
        }
        i++;
    }
    cout<<s<<endl;

return 0;
}