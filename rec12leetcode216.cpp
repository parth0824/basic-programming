
#define vi vector<int>
#define vvi vector<vector<int>>
#define um unordered_map<int,int>

#include <bits/stdc++.h>
using namespace std;

void print(int n,int k,int sum,string ans,int index,vvi &fans){
    if(sum > k)return ;
    if(ans.size() > n)return;
    if(sum == k && ans.size() == n){

        vi x;
        for(int i=0;i<ans.size();i++){
            int y = ans[i] - 48;
            x.push_back(y);
        }

        fans.push_back(x);

        // cout<<ans<<endl;

        return ;
    }

    for(int i=index;i<=9;i++){
        print(n,k,sum+i,ans+to_string(i),i+1,fans);
    }

}
int main(){
    int n,k;cin>>n>>k;
    vvi fans;
    print(n,k,0,"",1,fans);
    cout<<fans.size()<<endl;
return 0;
}
