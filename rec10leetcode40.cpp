#include <bits/stdc++.h>
using namespace std;
void printPermutation(vector<int> element,int target,string ans,int index,int sum){
    if(sum > target){
        return ;
    }
    for(int i=index;i<element.size();i++){

        

         





        if(sum == target){
            for(auto j : ans)cout<<j<<" ";cout<<endl;
            return ;
        }
        printPermutation(element,target,ans+to_string(element[i]),index+1,sum+element[i]);
        if(i < element.size() && element[i] == element[i+1]) i++;
    }

}
int main(){
    vector<int> element = {2,5,2,1,2};
    sort(element.begin(),element.end());
    int target = 5;
    int index = 0;
    int sum = 0;
    string ans="";
    printPermutation(element,target,ans,index,sum);
return 0;
}