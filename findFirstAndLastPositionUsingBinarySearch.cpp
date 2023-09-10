#include <bits/stdc++.h>
using namespace std;
 vector<int> searchRange(vector<int>& nums, int target){
        vector<int> ans;
        int s = 0;
        int l = nums.size() - 1;
        int a = -1;
        
        
        
        
        while((s <= l) && (s >= 0) && (l >= 0)){
            int m = s + (l - s)/2;
            if(nums[m] == target){
                l = m - 1;
                a = m;
            }
            else if (nums[m] > target){
                l = m - 1;
            }
            else if(nums[m] < target){
                s = m + 1;
            }
        }
        
        cout<<a<<endl;
        
        
        
        
        
        
        
        
        
        
        if(a == -1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(a);
        s = 0;
        l = nums.size();
        while((s <= l)  && (s >= 0) && (l >= 0)){
            int m = s + (l-s)/2;
            if(nums[m] == target){
                s = m + 1;
                a = m;
            }
            else if(nums[m] > target){
                l = m - 1;
            }
            else if(nums[m] < target){
                s = m + 1;
            }
        }
        cout<<a<<endl;
        ans.push_back(a);
        return ans;
    }
int main(){
    int size;cin>>size;
    vector<int> vec;
    for(int i=0;i<size;i++){
        int temp; cin>>temp;
        vec.push_back(temp);
    }
    int target; cin>>target;
    vector<int> z = searchRange(vec,target);
    cout<<endl;
    for(int i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }
return 0;
}