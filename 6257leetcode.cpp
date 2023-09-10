#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
int main(){
    int n,m;
    cin>>n>>m;
    vvi v;
    for(int i=0;i<n;i++){
        vi help;
        for(int j=0;j<m;j++){
            int x;cin>>x;
            help.pb(x);
        }
        v.pb(help);
    }
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }
    int sum = 0;
    for(int i=m-1;i>=0;i--){
        int m = INT_MIN;
        for(int j=n-1;j>=0;j--){
            m = max(v[j][i],m);
        }
        sum += m;
    }
    cout<<sum<<endl;
return 0;
}