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
#define umc unordered_map<char,int>
#define us unordered_set<char>
 
char chk (string a){
    us s;
    for(int i=0;i<a.size();i++){
        int x = s.size();
        s.insert(a[i]);
        int y = s.size();
        if(x == y)return a[i];
    }
    return '.';

}
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        char a = chk(s);
        cout<<a<<endl;
    }
return 0;
}