#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v,int i){
    if(v.size()-i <= i)return ;
    swap(v[i],v[v.size()-i-1]);
    i++;
    reverse(v,i);
}
int main (){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int i=0;
    reverse(v,i);
    for(auto i:v)cout<<i<<" ";
return 0;
}