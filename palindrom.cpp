#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;cin>>str;
    int s=0,l=str.size()-1;
    while(s<l){
        if(str[s] != str[l]){
            cout<<"NO";
            return 0 ;
        }
        else{
            s++;
            l--;
        }
    }
    cout<<"YES";
    cout<<str.substr(1,3);
return 0;
}