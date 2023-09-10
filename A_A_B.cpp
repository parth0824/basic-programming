#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>
#define vvs vector<vector<string>>
#define umci unordered_map<char, int>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>

void testcase(){
    string s;cin>>s;
    string h1 = "",h2="";
    bool x = 0;
    for(int i=0;i<s.size();i++){
        if(x == 0){
            if(s[i] == '+'){
                x = 1;
                continue;
            }
            h1 += s[i];
        }
        else{
            h2 += s[i];
        }
    }
    int sum1 = stoi(h1);
    int sum2 = stoi(h2);
    cout<<sum1+sum2<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        testcase();
    }
return 0;
}