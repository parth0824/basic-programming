#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i=0;i<2*n+1;i++){
        int x = n;
		for(int j=0;j<(2*n)+1;j++){
            if(( (i > n) && ((i+j) <= (n*2))) || ((i > n) && (i <= j)))cout<<x<<" ";
            else if((i<=n) && ((j <= n || (i+j) >= 2*n) && ((j <= i) || (i+j) >= 2*n))) cout<<x<<" ";
			else cout<<"  ";
            x=x;
            if(j < n)x--;else x++;
		}
        cout<<endl;
	}
}