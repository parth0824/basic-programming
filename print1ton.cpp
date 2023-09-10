#include <bits/stdc++.h>
using namespace std;
void print1ton(int n,int i){
    if(i == n+1){
        return ;
    }
    cout<<i<<endl;
    print1ton(n,i+1);

}
int main(){
    int n;cin>>n;
    print1ton(n,1);
}