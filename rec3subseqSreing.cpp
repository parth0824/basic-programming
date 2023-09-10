#include <bits/stdc++.h>
using namespace std;
void subseq(string a,int i,string ans,vector<string> &finalAns){
    if(i == a.size()){
        finalAns.push_back(ans);
        return ;
    }
    subseq(a,i+1,ans+a[i],finalAns);
    subseq(a,i+1,ans,finalAns);
}
int main(){
    string a;cin>>a;
    int i=0;
    string ans="";
    vector<string> finalAns;
    subseq(a,i,ans,finalAns);
    cout<<finalAns.size()<<endl;
    for(auto i:finalAns)cout<<i<<endl;
return 0;
}