// coin combination
#include <bits/stdc++.h>
using namespace std;
void pre(vector<int> coins,int sum , int csum , string ans){
    if(csum == sum){
        cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<coins.size();i++){
        if(sum > csum)    pre(coins , sum , csum+coins[i] , ans+to_string(coins[i])+" ");
        else if(sum < csum) return ; 
    }
}
int main (){
    vector<int> coins = {2,3,5,7,11};
    int sum = 10;
    pre(coins,sum,0,"");
}