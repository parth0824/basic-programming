#include <bits/stdc++.h>
using namespace std;
bool isSafe(int &i, int &j, vector<string> &help){
    if (i == help.size() || j == help.size()) return false;
    int t = i; // 0
    int r = j; // 0
    t--;
    while (t >= 0){
        if (help[t][r] == '1') return false;
        t--;
    }
    t = i-1;
    r = j+1;
    while (t >= 0 && r < help.size()){
        if (help[t][r] == '1') return false;
        t--;
        r++;
    }
    t = i-1;
    r = j-1;
    while (t >= 0 && r >= 0){
        if (help[t][r] == '1') return false;
        t--;
        r--;
    }
    return true;
}
void findQueenpath(int n, int i, int j, vector<string> help, vector<vector<string>> &ans){
    if (i == n){
        ans.push_back(help);
        return;
    }
    for (int k = 0; k < n; k++){
        help[i][k] = '1';
        if (isSafe(i, k, help)) findQueenpath(n, i + 1, 0, help, ans);
        help[i][k] = '0';
    }
}
vector<vector<string>> solveNQueens(int n){
    vector<vector<string>> ans;
    vector<string> help;
    string x = "";
    for (int j = 0; j < n; j++) x += '0';
    for (int i = 0; i < n; i++) help.push_back(x);
    findQueenpath(n, 0, 0, help, ans);
    return ans;
}
int main(){
    // int n;
    // cin >> n;
    // vector<vector<string>> ans = solveNQueens(n);
    // for (auto i : ans){
    //     for (auto j : i) cout << j << " \n";
    //     cout << endl;
    //     cout << endl;
    //     cout << endl;
    // }
    for(char i='1';i<='9';i++)cout<<i<<endl;
    return 0;
}