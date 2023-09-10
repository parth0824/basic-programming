#include <bits/stdc++.h>
using namespace std; 
void call(vector<bool> &board,int nq,int q,string ans){
    if(q == nq){
        ans.pop_back();
        ans.pop_back();
        cout<<ans<<endl;
        return ;        
    }
    for(int i=0;i<board.size();i++){
        if(board[i] == 0){
            board[i] = 1;
            call(board,nq,q+1,ans+"q" + to_string(q) + "b" + to_string(i) +" : ");
            board[i] = 0;
        }
    }
}
int main(){                         
    int no_of_queen;cin>>no_of_queen;
    int nb;cin>>nb;
    vector<bool> board;
    for(int i=0;i<nb;i++){
        board.push_back(0);
    }
    call(board,no_of_queen,0,"");
return 0;
}