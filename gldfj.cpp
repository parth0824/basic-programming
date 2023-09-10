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

int ans = 0;
void printNdigites(vector<int>item,int i,vector<int>help){
    if(item.size() == 0){
        ans++;
    }
    for(int i=0;i<item.size();i++){
        
    }
}
int main(){
    int n;cin>>n;
    vector<int> item;
    for(int i=0;i<n;i++){
        item.push_back(i+1);
    }
    vector<int> help;
    printNdigites(item,0,help);
return 0;
}