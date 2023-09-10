#include <bits/stdc++.h>
using namespace std;
bool palintrome(char x[],int s){
    int i = 0;
    int l = s;
    while(i < l/2){
        if(x[i] == x[s-1]){
            i++;
            s--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char a [100];
    cin>>a;
    cout<<a<<endl;
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    cout<<i<<endl;
    cout<<palintrome(a,i)<<endl;
return 0;
}