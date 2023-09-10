#include <bits/stdc++.h>
using namespace std;
    unsigned long long int finalCall(string a){
        unsigned long long int ans = 0;
        unsigned long long int h = 1;
        for(long long int i=a.size()-1;i>=0;i--){
            long long int x = a[i]-48;
            ans = (x * h) + ans;
            h = h * 2;
        }
        return ans;
    }
    string  binary(long long int x){
        string y ="";
        while(x > 0){
            long long int p = x % 2;
            y =  to_string(p) + y;
            x = x / 2;
        }
        return y;
    }
    long long int concatenatedBinary(int n) {
        string s = "";
        for(long long int i=1;i<=n;i++){
            string x = binary(i);
            s = s + x;
        }


        // cout<<finalCall(s)<<endl;
        unsigned long long int fo = 1000000007;
        unsigned long long int ans = (finalCall(s)) % fo;
        return ans;
    }
int  main(){
    int x;cin>>x;
    cout<<concatenatedBinary(x);
}

