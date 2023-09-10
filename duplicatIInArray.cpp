#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &num) {
    int g = num.size();
        vector<vector<int>> ans;
        vector<int> help;
        for(int i=0;i<g;i++){
            help.push_back(((-1) * (num[i])));
        }
        for(int i=0;i<num.size();i++){
            int k = i;
            for(int j=0;j<num.size();j++){
                if(i == j || k == j)continue;
                int sum = num[i] + num[j] + help[k];
                if(sum == 0){
                    vector<int> x;
                    x.push_back(num[i]);
                    x.push_back(num[j]);
                    x.push_back(help[k]);
                    sort(x.begin(),x.end());
                    ans.push_back(x);
                }
                k++;
            }
        }
        return ans;
    }
    //    -1,-1,2       ,    -1,0,1
int main(){
    int b;cin>>b;
    vector<int> a;
    for(int i=0;i<b;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    vector<vector<int>> c;
    c = threeSum(a);
    cout<<"Answer-->"<<endl;
    for(int i=0;i<c.size();i++){
        for(int j=0;j<c[i].size();j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}