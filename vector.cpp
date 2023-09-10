#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
    // vector<int> x;
    // int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     int y;cin>>y;
    //     x.push_back(y);
    // }
    // x.push_back(1);
    // x.pop_back();
    // print(x);
    // vector<int> y = x;
    // y.push_back(2);
    // print(y);
    // vector<pair<int,char>> v;
    //  = {{2,'r'},{3,'e'}};
    // int s;cin>>s;
    // for(int i=0;i<s;i++){
    //     int x;cin>>x;
    //     char y;cin>>y;
    //     v.push_back({x,y});
    // }
    // print(v);
    vector<vector<int>> v;
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int n;cin>>n;
        vector<int> t;
        for(int j=0;j<n;j++){
            int k;cin>>k;
            t.push_back(k);
        } 
        v.push_back(t);
    }
    for(int i=0;i<N;++i){
        print(v[i]);
    }
return 0;
}