#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int m = 1;
		for(int j=0;j<(2*n)-1;j++){
			if((i>=j) || (i+j) >= 2*n-2){
				cout<<m<<" ";
			}
			else{
				cout<<"  ";
			}
			
			if(j < n-1)m++;
			else m--;
		}
		cout<<endl;
	}
}