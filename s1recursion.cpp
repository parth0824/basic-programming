#include <bits/stdc++.h>
using namespace std;
void print_name(int n){
    if(n == 0)return ;//base case 
    // cout<<"PARTH\n";
    cout<<n<<endl;
    n--;
    print_name(n);//recalling function
}
int main(){
    int n;cin>>n;
    print_name(n);
return 0;
}