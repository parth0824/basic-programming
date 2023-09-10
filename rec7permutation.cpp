#include <bits/stdc++.h>
using namespace std;
void printsub(string str,string l){
    if(str.size() == 0){
        cout<<l<<endl;
        return ;
    }
    for(int i=0;i<str.size();i++){
        // to remove duplicates 
        bool z = false;
        for(int j=i+1;j<str.size();j++){
            if(str[i] == str[j]){
                z = true;
                break;
            }
        }
        //
        if(z == false){
            string x = str.substr(0,i);
            string y = str.substr(i+1);
            printsub(x+y,l+str[i]);
        }
    }
}
int main(){
    string str;cin>>str;
    string l="";
    printsub(str,l);
return 0;
}