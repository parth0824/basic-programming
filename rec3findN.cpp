




// first occurance 
#include <bits/stdc++.h>
using namespace std;
int find3(vector<int> v,int i,int x){
    if(i == v.size())return x;
    else if(v[i] == 3){
        x = i;
    }
    i = i + 1;
    return find3(v,i,x);
    
}
int main (){
    vector<int> v={1,2,4,3,5,67,2,4,2,32,4,5,3,1};
    int x = -1;
    cout<<find3(v,0,x);
}










// // last occurance 
// #include <bits/stdc++.h>
// using namespace std;
// int find3(vector<int> v,int i,int x){
//     if(i == v.size())return x;
//     else if(v[i] == 3){
//         x = i;
//     }
//     i = i + 1;
//     return find3(v,i,x);
    
// }
// int main (){
//     vector<int> v={1,2,4,3,5,67,2,4,2,32,4,5,3,1};
//     int x = -1;
//     cout<<find3(v,0,x);
// }












// all occurance 
// #include <bits/stdc++.h>
// using namespace std;
// vector<int>  find3(vector<int> v,int i,vector<int> ans){
//     if(i == v.size())return ans;
//     else if(v[i] == 3){
//         ans.push_back(i);
//     }
//     i = i + 1;
//     return find3(v,i,ans);
    
// }
// int main (){
//     vector<int> v={1,2,4,93,5,67,2,3,3,3,3,3,3,3,34,2,32,4,5,1};
//     vector<int> ans;
//     vector<int> b = find3(v,0,ans);
//     for(auto i:b)cout<<i<<endl;
// return 0;

// }








































