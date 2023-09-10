#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string str, string p) {
    string s = str;
    for(int i=0;i<s.size();i++){
        int y = p.size();
        int z = 0;
        while(z < y){
            if(s[i] == p[z]){
                cout<<"hello";
                z++;
                i++;
            }
            else{
                i--;
               break; 
            }
        }
        if(z == p.size()){
            i = i - p.size()-1;
            s.erase(i,i+p.size());
        }
    }
    return s;
}
int main(){
     cout<<removeOccurrences("daabcbaabcbc","abc");
return 0;
}