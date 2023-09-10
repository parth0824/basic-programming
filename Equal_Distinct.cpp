#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
            v.push_back(x);
	    }
	    if(v.size() % 2 == 0){
	        cout<<"YES\n";
	        continue;
	    }
	    else{
	        unordered_map<int,int> u;
	        for(int i=0;i<n;i++){
	            u[v[i]]++;
	        }
	        bool d = 0;
	        if(u.size() % 2 == 0){
	            cout<<"YES\n";
	        }
	        else {
                int e=0,o=0;
	            for(auto k:u){ 
                    if(k.second % 2==0)e++;
                    if(k.second % 2 != 0)o++;
	            }
	            if(e % 2 != 0 || o % 2 ==0){
                    cout<<"YES\n";
                }
                else {
                    cout<<"NO\n";
                }
	        }
	    }
	    
	}
	return 0;
}
