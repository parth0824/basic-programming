#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define umii unordered_map<int,int>

void printCombination(vi v,int sum,int csum,int index,vvi &anss,vi hf){
    if(csum > sum)return ;
    if(csum == sum){
        anss.push_back(hf);
        return ;
    }
    for(int i=index;i<v.size();i++){
        hf.push_back(v[i]);
        printCombination(v,sum,csum+v[i],i+1,anss,hf);
        hf.pop_back();
        while(i < v.size()-1 &&  v[i] == v[i+1])i++;
    }
}
int main(){
    int n;cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int sum;cin>>sum;
    sort(v.begin(),v.end());
    vvi anss;
    vi hf;
    printCombination(v,sum,0,0,anss,hf);
    for(auto i:anss){
        for(auto j:i)cout<<j<<" ";cout<<endl;
    }
return 0;

}

// class Solution
// {
// public:
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define umii unordered_map<int, int>

//     void printCombination(vi v, int sum, int csum, int index, vvi &anss, vi hf)
//     {
//         if (csum > sum)
//             return;
//         if (csum == sum)
//         {
//             anss.push_back(hf);
//             return;
//         }
//         for (int i = index; i < v.size(); i++)
//         {
//             hf.push_back(v[i]);
//             printCombination(v, sum, csum + v[i], i + 1, anss, hf);
//             hf.pop_back();
//             while (i < v.size() - 1 && v[i] == v[i + 1])
//                 i++;
//         }
//     }

//     vector<vector<int>> combinationSum2(vector<int> &v, int sum)
//     {
//         sort(v.begin(), v.end());
//         vvi anss;
//         vi hf;
//         printCombination(v, sum, 0, 0, anss, hf);
//         return anss;
//     }
// };