#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int esum=0,osum=0;
	bool a=0;
	while(n != 0){
		int x = n % 10;
		n = n / 10; 
		if(a==0){
			osum = osum + x;
			a=1;
		}
		else if(a==1){
			esum = esum + x;
			a=0;
		}
	}
	cout<<osum<<endl;
	cout<<esum<<endl;
return 0;
}