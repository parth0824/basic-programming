#include <bits/stdc++.h>
using namespace std;
void call(int n,int s,string v){
    if(s > n) return ;
    if(s == n){
        for(auto i:v)cout<<i<<" ";cout<<endl;
    }
    else{
        for(int i=1;i<=6;i++)
            call(n,s+i,v+to_string(i));
    }
}
int main(){ 
    int n,s=0;cin>>n;
    string v;
    call(n,s,v);
return 0;
}







// #include <bits/stdc++.h>
// using namespace std;
// void call(int n,int s,string v){
//     if(s > n){
//         return ;
//     }
//     if(s == n){
//         for(auto i:v)cout<<i<<" ";cout<<endl;
//     }
//     else{
//         // for sum 10 
//         call(n,s+1,v+'1');
//         call(n,s+2,v+'2');
//         call(n,s+3,v+'3');
//         call(n,s+4,v+'4');
//         call(n,s+5,v+'5');
//         call(n,s+6,v+'6');
//         call(n,s+7,v+'7');
//         call(n,s+8,v+'8');
//         call(n,s+9,v+'9');
//     }
// }
// int main(){ 
//     int n;cin>>n;
//     int s =0;
//     string v;
//     call(n,s,v);
// return 0;
// }