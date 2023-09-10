#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int esum = 0,osum = 0;
        while(n != 0){
            int x = n%10;
            n = n / 10;
            if(x % 2 == 0){
                esum = esum + x;
            }
            else{
                osum = osum + x;
            }
        }
        if(esum % 4 == 0)cout<<"Yes"<<endl;
        else if(osum % 3 == 0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
return 0;
}