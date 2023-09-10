#include <bits/stdc++.h>
using namespace std;
    long long countBadPairs(vector<int>& n) {
        long long ans = 0;
        vector<pair<int,int>> p;
        for(int i=0;i<n.size();i++){
            p.push_back({n[i],i});
        }
        sort(p.begin(),p.end());
        for(auto i : p){
            // cout<<i.first<<" "<<i.second<<endl;
            
        }
        return 0;
    }
int main (){
    vector<int> a = {1,232,3,4,5,6,7,8,9};
    cout<<countBadPairs(a);
}