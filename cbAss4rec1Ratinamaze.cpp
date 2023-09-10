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
 
bool ch = 0;
void print_part(vvc &b,int i,int j,vvb ans){
    if(i >= b.size() || j >= b[0].size() || b[i][j] == 'X'){
        return ;
    }
    if(i == b.size() - 1 && j == b[0].size()-1 && ch == 0 ){
        ch = 1;
        ans[i][j] = 1;
        for(auto i : ans){
            for(auto j : i)cout<<j<<" ";
            cout<<endl;
        }
        return ;
    }
    b[i][j] = 'X';
    ans[i][j] = 1;
    print_part(b,i,j+1,ans);
    print_part(b,i+1,j,ans);
    b[i][j] = 'O';
    ans[i][j] = 0;
}
int main(){
    int n,m;cin>>n>>m;
    vvc board;
    vvb ans;
    for(int i=0;i<n;i++){
        vc help;
        vb h;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            help.push_back(x);
            h.push_back(0);
        }
        board.push_back(help);
        ans.push_back(h);
    }
    print_part(board,0,0,ans);
    if(ch == 0){
        cout<<-1<<endl;
        return 0;
    }
return 0;
}
