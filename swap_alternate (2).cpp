#include <bits/stdc++.h>
using namespace std;
void reverseAlter(int a,int b[]){
    for(int i=0;i<a;i++){
        if((a%2) != 0 && i > a - 2)break;
        int t = b[i];
        b[i] = b[i+1];
        b[i+1] = t;
        i++;
    }
}
void printArray(int a,int b[]){
    for(int i=0;i<a;i++)
    cout<<b[i]<<" ";cout<<endl;
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    reverseAlter(a,b);
    printArray(a,b);
}