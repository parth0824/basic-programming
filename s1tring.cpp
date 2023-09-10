#include <bits/stdc++.h>
using namespace std;
void solve(){
    string str;getline(cin,str);
    for(int i=0;i<str.size();i++){
        int a = 0;
        for(int j=0;j<str.size()-i;j++){
            string x = str.substr(a+j,i+1);
            cout<<x<<endl;
        }
    }
    
}
int main(){
    solve();
return 0;
}