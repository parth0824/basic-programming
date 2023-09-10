#include <iostream>
using namespace std;
void printName(int n){
    if(n == 0)return ;
    cout<<"Parth\n";
    n--;
    printName(n);
}
int main(){
    int n;cin>>n;
    printName(n);
}