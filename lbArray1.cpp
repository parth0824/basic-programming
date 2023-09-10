#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int val=INT_MAX;
    int a[n];
    fill_n(a, n, val+INT_MAX);
    for(auto i:a)cout<<i<<" ";
}