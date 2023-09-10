#include <iostream>
using namespace std;
int call(int c,int arr[]){
    int a = 0;
    for(int i=0;i<c;i++) a = a ^ arr[i];
    for(int i=1;i<c;i++) a = a ^ i;
    return a;
}
int main(){int t ;cin>>t;
    while(t != 0) {t--;
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++) cin>>b[i];
    cout<<call(a,b);
    }
}