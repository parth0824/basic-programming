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
#define usi unordered_set<int>
#define uss unordered_set<string>

int sss = 0;
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

void findSubstring(string s,int i,string ans){
    if(isPalindrome(ans)){
        if(ans !="") sss++;
    }
    if(i == s.size())return ;
    findSubstring(s,i+1,ans+s[i]);
}

int main(){
    string s;cin>>s;
    int x = s.size();
    for(int i=0;i<x;i++){
        findSubstring(s,0,"");
        s.erase(s.begin());
    }
    cout<<sss<<endl;
return 0;
}