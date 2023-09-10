#include <bits/stdc++.h>
using namespace std;
void reverseMe(int a,int b[]){
    for(int i=0;i<a/2;i++){
        int temp = b[i];
        b[i] = b[a-1-i];
        b[a-1-i] = temp;
    }
}
void printArray(int a,int b[]){
   for(int i=0;i<a;i++) 
       cout<<b[i]<<" ";
}
int main(){
   int a;cin>>a;
   int b[a];
   for(int i=0;i<a;i++){
       cin>>b[i];
   }
   reverseMe(a,b);
   printArray(a,b);
return 0;
}
