#include <bits/stdc++.h>
using namespace std;
int search(int a,int b[],int x){
    int s = 0 , l = a - 1;
    while(s <= l){
        int m = s + (l - s)/2;
        if(b[m] == x)
            return m;
        else if(b[m] > x) 
            l = m - 1;
        else 
            s = m + 1;
    }
    return -1;
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int x;
    cin>>x;
    int t = -1;
    cout<<search(a,b,x)<<endl;
return 0;
}