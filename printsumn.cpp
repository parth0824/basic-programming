// #include <bits/stdc++.h>
// using namespace std;
// bool printsumm(int arr[],int n,int t,int i,int sum,vector<int> &ans){
//     if(i == n){
//         if(sum == t){
//             for(auto j : ans)cout<<j<<" ";cout<<endl;
//         }
//         return ;
//     }
//     ans.push_back(arr[i]);
//     sum += arr[i];
//     printsumm(arr,n,t,i+1,sum,ans); // take it 
//     ans.pop_back();
//     sum -= arr[i];
//     printsumm(arr,n,t,i+1,sum,ans); // dont take it 
// }
// int main(){
//     int n;cin>>n;
//     int *arr = new int[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     int t;cin>>t;
//     vector<int> ans;
//     printsumm(arr,n,t,0,0,ans);
// }

// for print only one subsequesnce 
/*
#include <bits/stdc++.h>
using namespace std;
bool printsumm(int arr[],int n,int t,int i,int sum,vector<int> &ans){
    if(i == n){
        if(sum == t){
            for(auto j : ans)cout<<j<<" ";cout<<endl;
            return true;
        }
        return false;
    }
    ans.push_back(arr[i]);
    sum += arr[i];
    if(printsumm(arr,n,t,i+1,sum,ans))return true;
    ans.pop_back();
    sum -= arr[i];
    if(printsumm(arr,n,t,i+1,sum,ans))return true;
    return false;
}
int main(){
    int n;cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int t;cin>>t;
    vector<int> ans;
    printsumm(arr,n,t,0,0,ans);
}
*/

// print the count of all subsequence of sum t
#include <bits/stdc++.h>
using namespace std;
int printsumm(int arr[],int n,int t,int i,int sum){
    if(i == n){
        if(sum == t){
            return 1;
        }
        return 0;
    }
    sum += arr[i];
    int l = (printsumm(arr,n,t,i+1,sum));
    sum -= arr[i];
    int r = (printsumm(arr,n,t,i+1,sum));
    return l+r;
}
int main(){
    int n;cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int t;cin>>t;
    int ans= 0;
    cout<<printsumm(arr,n,t,0,0);
return 0;
}
