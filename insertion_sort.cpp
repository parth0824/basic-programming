#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> b;
    for(int i=0;i<a;i++){
        int c;cin>>c;
        b.push_back(c);
    }
    for(int i=1;i<b.size();i++){
        int t = b[i];
        int j = i - 1;
        while(j >= 0 && b[j] > t){
            b[j+1] = b[j];
            j--;
        }
        b[j+1] = t;
    }
    for(auto i : b)cout<<i<<" ";cout<<endl;
return 0;
}