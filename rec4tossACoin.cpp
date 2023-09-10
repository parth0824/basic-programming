#include <bits/stdc++.h>
using namespace std;
void toss(int n,string a){
    if(n == 0){cout<<a<<endl;return ;}
    // if(a[a.size()-1]!='H')
    toss(n-1,a+"H");
    // if(a[a.size()-1]!='T')
    toss(n-1,a+"T");    
}
int main(){
    int n;cin>>n;//no of coins 
    string a="";
    toss(n,a);
return 0;
}