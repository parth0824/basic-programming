#include <bits/stdc++.h>
int pow(int a,int b){
    if(b == 0)return 1;
    return a*pow(a,b-1);
}
using namespace std;
int main (){
    int a,b;cin>>a>>b;
    cout<<pow(a,b);
return 0;
}