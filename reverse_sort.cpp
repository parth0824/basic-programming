#include <bits/stdc++.h>
using namespace std;
    vector<long long int> fact(int n){
        long long int a = 1;
        for(int i=2;i<=n;i++){
            a = a * i;
        }//6
// {2, 3, 4, 5, -1, 0}
        vector<long long int> b;
        b.push_back(a);
        return b;
        
    }
    long long maxProduct(vector<int> ar, int n) {
	    vector<int> arr;
	    for(int i=0;i<ar.size();i++)arr.push_back(ar[i]);
	    int pro = 1;
	    int max_pro = INT_MIN;
	    vector<int> s;
	    for(int i=0;i<n;i++){
	        if(arr[i] < 0){
	            s.push_back(arr[i]);
                continue;
	        }
	        else if(arr[i] == 0){
	            if((s.size()% 2)== 0){
                    
	            }
	            else {
	                s.pop_back();
	            }
                int g = 1;
	            for(int j=0;j<s.size();j++){
    	            g = g * s[j];
	            }
	            s.clear();
	            max_pro = max_pro * g;
	            pro = 1;
	            continue;
	        }
	        pro = pro * arr[i];
	        max_pro = max(max_pro , pro);
	    }return max_pro;
	}
int main (){
    int a;cin>>a;
    vector<int> b;
    for(int i=0;i<a;i++){int c;cin>>c;b.push_back(c);}cout<<maxProduct(b,a);
return 0;
}