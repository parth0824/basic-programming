
// leetcode 17
#include <bits/stdc++.h>
using namespace std;
void printAllPermutaion (vector<string> charactes,string digits,string ans,int index,vector<string> &finalAns){
    if(ans.size() == digits.size()){
        finalAns.push_back(ans);
        return ;
    }
    int d =  digits[index] - 48 - 2;
    for(int i=0;i<charactes[d].size();i++){
        printAllPermutaion(charactes,digits,ans+charactes[d][i],index+1,finalAns);
    }
}
int main(){
    string digits;cin>>digits;
    vector<string> charactes = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string ans = "";
    vector<string> finalAns;
    printAllPermutaion(charactes,digits,ans,0,finalAns);
    for(auto i : finalAns){
        cout<<i<<endl;
    }
}






























// #include <bits/stdc++.h>
// using namespace std;
// void printAllPermutaion (vector<string> charactes,string digits,string ans,int index){
//     if(ans.size() == digits.size()){
//         cout<<ans<<endl;
//         return ;
//     }
//     for(int i=0;i<charactes[digits[index] - 48 - 1].size();i++){
//         printAllPermutaion(charactes,digits,ans+charactes[digits[index] - 48 - 1][i],index+1);
//     }
// }
// int main(){
//     string digits;cin>>digits;
//     vector<string> charactes = {"abc","def","ghi","jkl","mno","pqr","stu","vqx","yz"};
//     string ans = "";
//     printAllPermutaion(charactes,digits,ans,0);
// return 0;
// }















