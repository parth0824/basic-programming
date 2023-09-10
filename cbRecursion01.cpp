// // first we will understand pmi then we goto recursion
// // avg 10^4 call for stack 
// // it is of two type head recc and tail recc
// #include <bits/stdc++.h>
// using namespace std;
// void rec(int n){
//     if(n == 0)return ;
//     cout<<n<<endl;
//     rec(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;cin>>n;
//     rec(n);
// }

// // head rec me rec se ane ke baad kam krige to vo head rec hoga 

// #include <bits/stdc++.h>
// using namespace std;
// int fac(int n,int a){
//     // tail recursion imediate reture is taking place in this 
//     if(n == 1)return a;
//     return fac(n-1,a*n);
// }
// int main (){
//     int n;cin>>n;
//     int a = 1;
//     cout<<fac(n,a);
// }


// #include <bits/stdc++.h>
// using namespace std;
// int pow(int a,int b,int ans){ // tail recursion
//     if(b == 0){
//         return ans;
//     }
//     return pow(a,b-1,ans*a);
// }
// int main(){
//     int a,b,ans=1;cin>>a>>b;
//     cout<<pow(a,b,ans);
// }

#include <bits/stdc++.h>
using namespace std; 
int find(vector<int> &v,int item,int size){
    if(size < 0)         return -1;
    if(v[size] == item)  return size;
    return find(v,item,size-1);
}
int main(){
    vector<int> v;
    int size;cin>>size;
    for(int i=0;i<size;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int item;cin>>item;
    cout<<find(v,item,size-1);
return 0;
}