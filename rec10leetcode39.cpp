// my way of doing it 
#include <bits/stdc++.h>
using namespace std;
void call(vector<int>element,int target,int csum,int index,vector<int> my,vector<vector<int>> &anss){
    if(csum > target)return;
    if(csum == target){
        anss.push_back(my);
    }
    for(int i=index;i<element.size();i++){
        my.push_back(element[i]);
        call(element,target,csum+element[i],i,my,anss); 
        my.pop_back();
    }
}
int main(){
    int n;cin>>n;
    vector<int> element;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        element.push_back(c);
    }
    int target;cin>>target;
    vector<vector<int>> anss;
    vector<int> my;
    call(element,target,0,0,my,anss);
    for(auto i : anss){
        for(auto j : i)cout<<j<<" ";
        cout<<endl;
    }
return 0;
}
