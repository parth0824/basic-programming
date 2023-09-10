/*
#include <bits/stdc++.h>
using namespace std;
int j = 1;
void printsubsequence(int arr[],int size,int i,vector<int>ans){
    if(i == size){
    //    cout<<"J:"; cout<<j<<endl;
        j++;
        for(auto i : ans)cout<<i<<" ";cout<<endl;
        return ;
    }
    ans.push_back(arr[i]);
    printsubsequence(arr,size,i+1,ans);
    ans.pop_back();
    printsubsequence(arr,size,i+1,ans);
}
int main(){
    int n;cin>>n;
    int *arr = new int [n];
    vector<int> ans;
    for(int i=0;i<n;i++)cin>>arr[i];
    printsubsequence(arr,n,0,ans);
return 0; 
}
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define po pop_back
#define pii pair<int, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>

void printF(int p[],int n,int i,vi v){
    if(i == n){
        for(auto i : v)cout<<i<<" ";
        cout<<endl;
        return ;
    }
    v.pb(p[i]);
    printF(p,n,i+1,v);
    v.po();
    printF(p,n,i+1,v);



}
int main(){
    int n;cin>>n;
    int *p = new int [n];
    for(int i=0;i<n;i++)cin>>p[i];
    vi ans;
    printF(p,n,0,ans);
return 0;
}