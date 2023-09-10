#include <bits/stdc++.h>
using namespace std;
int allsum(int n,int sum){
    if(n == 0){
        return sum;
    }
    // sum += n;
    return allsum(n-1,sum*n);
}
int main(){
    int n;cin>>n;
    int sum = 1;
    cout<<allsum(n,sum);
}