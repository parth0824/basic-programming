




















































// // https://hack.codingblocks.com/app/contests/3553/535/problem
// // https://leetcode.com/problems/word-search/description/
#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<bool>> &ans){
    cout<<"hello2"<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void hasPart(vector<vector<char>> maze,int r,int c,vector<vector<bool>> &ans){

    if(r == maze.size() - 1 && c == maze[0].size() - 1 ){
        ans[r][c] = 1;
        cout<<"hello3";
        display(ans);
        return ;
    }

    if(r < 0 || c < 0 || maze.size() - 1 < r || maze[0].size() - 1 < c || maze[r][c] == 'X'){
        return ;
    }



    maze[r][c] = 'X';
    ans[r][c] = 1;
    hasPart(maze , c , r + 1 , ans);
    hasPart(maze , c , r - 1 , ans);
    hasPart(maze , c + 1 , r , ans);
    hasPart(maze , c - 1 , r , ans);
    ans[r][c] = 0;


    maze[r][c] = 'O';



}
int main(){
    int n,m;cin>>n>>m;
    vector<vector<char>> maze;
    for(int i=0;i<n;i++){
        vector<char> h;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            h.push_back(x);
        }
        maze.push_back(h);
    }    
    vector<vector<bool>> ans;
    for(int i=0;i<n;i++){
        vector<bool> help;
        for(int j=0;j<m;j++){
            help.push_back(0);
        }
        ans.push_back(help);
    }
    if(maze[n-1][m-1] != 'X'){
    cout<<"hello1";
        hasPart(maze,0,0,ans);
    }

return 0;
}


