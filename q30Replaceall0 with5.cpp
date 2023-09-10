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

void replace0with5(string &a,int i){
    if(i == a.size())return ;

    if(a[i] == '0')a[i] = '5';
    replace0with5(a,i+1);


}
int main(){
    string a;cin>>a;
    replace0with5(a,0);
    cout<<a<<endl;
return 0;
}