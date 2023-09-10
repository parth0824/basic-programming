#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& s) {
    vector<vector<int>> v;
    v[0]=s[0];
    int j = 0;
    for(int i=1;i<s.size();i++){
                
    }
}
int main (){
    vector<vector<int>> v = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = merge(v);
    for(int i=0;i<ans.size();i++)cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
return 0;
}