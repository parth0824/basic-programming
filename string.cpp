#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "pChinTUarth";
    // for(int i=0;i<a.size();i++){
    //     a[i] = toupper(a[i]);
    // }
    // cout<<a<<endl;
    transform(a.begin(),a.end(),a.begin(),::towupper);
    cout<<a<<endl;
return 0;
}