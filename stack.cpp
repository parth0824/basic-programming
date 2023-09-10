#include <bits/stdc++.h>
using namespace std;
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() <= 1)return nums;
        int x = 0;
        vector<int> ans;
        int y = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                x++;
                continue;
            }
            y = y * nums[i];
        }
        if(x == 0){
            for(int i=0;i<nums.size();i++){
                ans.push_back(y/nums[i]);
            }
        }
        else if(x == 1){
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 0){
                    ans.push_back(y);
                }
                else {
                    ans.push_back(0);
                }
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
int main(){
    vector<int> x = {-1,0,0,-3,3};
    vector<int> y = productExceptSelf(x);
    for(auto i : y){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}