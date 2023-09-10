#include <bits/stdc++.h>
using namespace std;
void print1ton(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<endl;
    print1ton(n-1);

}
int main(){
    int n;cin>>n;
    print1ton(n);
}