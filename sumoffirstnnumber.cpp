#include<bits/stdc++.h>
using namespace std;
void sum(int n,int summ){
    if(n == 0){
        cout<<summ<<endl;
        return ;
    }
    sum(n-1,n+summ);
}
int main(){
    int n;cin>>n;
    sum(n,0);
}


#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
}
int main(){
    int n;cin>>n;
    cout<<sum(n);
}
