#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n;cin>>n;
	vector<long long int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	long long int k;cin>>k;
	int s=0;
	int l = n;
	while(s <= l){
		int m = (s+(l-s)/2);
		if(v[m] == k){
			cout<<m<<endl;
			return 0;
		}
		else if(v[m] > k){
			l = m-1;
		}
		else{
			s = m+1;
		}
	}
	cout<<-1<<endl;
	return 0;
}