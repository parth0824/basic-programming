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
#define um unordered_map<int,int>
#define us unordered_set<int>
void is_present(vvc &board,string &key,int i,int j,int k,string &ans,bool &chk){ 
    if(ans == key || chk == 1){
        chk = 1;
        return ;
    }
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || key[k] != board[i][j]){
        return ;
    }
    ans += board[i][j];
    char iit = board[i][j];
    board[i][j] = '.';
    is_present(board,key,i+1,j,k+1,ans,chk);
    is_present(board,key,i-1,j,k+1,ans,chk);
    is_present(board,key,i,j+1,k+1,ans,chk);
    is_present(board,key,i,j-1,k+1,ans,chk);
    ans.pop_back();
    board[i][j] = iit;
}
int main(){
    int n,m;
    cin>>n>>m;
    vvc v;
    for(int i=0;i<n;i++){
        vc help;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            help.push_back(x);
        }
        v.push_back(help);
    }
    int o;cin>>o;
    int t=0;
    vs ans;
    while(t < o){
    bool x = 0;
        string ch;cin>>ch;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == ch[0]){
                    string h="";
                    is_present(v,ch,i,j,0,h,x);
                    if(x == 1)ans.push_back(ch);
                    if(x == 1)break;
                }
            }
            if(x == 1)break;
        }
        t++;
    }
    for(auto i : ans)cout<<i<<" ";cout<<endl;
return 0;
}




// leetcode 
class Solution {
public:

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define um unordered_map<int,int>
#define us unordered_set<int>
void is_present(vvc &board,string &key,int i,int j,int k,string ans,bool &chk){
    if(ans == key || chk == 1){
        chk = 1;
        return ;
    }
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || key[k] != board[i][j]){
        return ;
    }
    ans += board[i][j];
    char iit = board[i][j];
    board[i][j] = '.';
    is_present(board,key,i+1,j,k+1,ans,chk);
    is_present(board,key,i-1,j,k+1,ans,chk);
    is_present(board,key,i,j+1,k+1,ans,chk);
    is_present(board,key,i,j-1,k+1,ans,chk);
    ans.pop_back();
    board[i][j] = iit;
}
    vector<string> findWords(vector<vector<char>>& v, vector<string>& o) {
    int t=0;
    vs ans;
    while(t < o.size()){
    bool x = 0;
        string ch = o[t];
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j] == ch[0]){
                    is_present(v,ch,i,j,0,"",x);
                    if(x == 1)ans.push_back(ch);
                    if(x == 1)break;
                }
            }
            if(x == 1)break;
        }
        t++;
    }
    return ans;
    }
};