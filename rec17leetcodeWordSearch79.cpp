#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define um unordered_map<int,int>
#define us unordered_set<int>
 
bool check = 0;
void check_is_present(vvc &v,string key,int i,int j,string ans,int k){
    // cout<<ans<<endl;
    if(ans == key){
        check = 1;
        return ;
    }
    if(i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != key[k]) return ;
    ans += v[i][j];
    char x = v[i][j];
    v[i][j] = '.';
    check_is_present(v,key,i+1,j,ans,k+1);
    check_is_present(v,key,i-1,j,ans,k+1);
    check_is_present(v,key,i,j+1,ans,k+1);
    check_is_present(v,key,i,j-1,ans,k+1);
    ans.pop_back();
    v[i][j] = x;
}
int main(){
    int n,m;cin>>n>>m;
    vvc v;
    for(int i=0;i<n;i++){
        vc help;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            help.push_back(x);            
        }
        v.push_back(help);
    }
    string key;cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] != key[0]){
                continue;
            }
            check_is_present(v,key,i,j,"",0);
            if(check == 1){
                cout<<check<<endl;
                return 0;
            }
        }
    }
    cout<<check<<endl;
    return 0;
}




// leetcode code 
#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define um unordered_map<int,int>
#define us unordered_set<int>
class Solution {
public:
bool check = 0;
void check_is_present(vvc &v,string &key,int i,int j,string ans,int k){

    if(ans == key || check == 1){
        check = 1;
        return ;
    }

    if(i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != key[k]) 
        return ;

    ans += v[i][j];
    char x = v[i][j];
    v[i][j] = '.';

    check_is_present(v,key,i+1,j,ans,k+1);
    check_is_present(v,key,i-1,j,ans,k+1);
    check_is_present(v,key,i,j+1,ans,k+1);
    check_is_present(v,key,i,j-1,ans,k+1);

    ans.pop_back();
    v[i][j] = x;

}
    bool exist(vector<vector<char>>& v, string key) {

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j] == key[0]){

                    check_is_present(v,key,i,j,"",0);

                    if(check == true)
                        return true;
                }
            }
        }

        return false;

    }
};