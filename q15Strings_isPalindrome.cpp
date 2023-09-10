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
    bool isPalindrome(string ans){
        int i = 0;
        int j = ans.size()-1;
        while(i < j){
            if(ans[i] != ans[j])return false;
            i++;
            j--;
        }
        return true;

    }
int main(){
    string str;cin>>str;
    bool x = isPalindrome(str);
    if(x == 1)cout<<"true";
    else cout<<"false";

return 0;
}