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

void printOdd(int n){
    if(n == 0)return ;
    if(n % 2 == 1)cout<<n<<endl;
    return printOdd(n-1);
}
void printeven(int n,int m){
    if(m == n)return ;
    if(m % 2 == 0)cout<<m<<endl;
    return printeven(n,m+1);
}
int main(){
    int n;cin>>n;
    printOdd(n);
    printeven(n,2);
return 0;
}