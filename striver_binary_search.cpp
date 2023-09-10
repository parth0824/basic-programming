// UPPER BOUND
#include <bits/stdc++.h>
using namespace std;
int upper(int a,int b[],int x){
    int l = 0,h = a - 1;
    int flag = INT_MIN;
    while(l <= h){
        int m = (l + h) / 2;
        if(b[m] >= x){
            flag = b[m];
            h = m - 1;
        }
        else{// if(b[m] < x){
            l = m + 1;
        }
    }
    return flag;
}
int main(){
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int x;cin>>x;
    cout<<upper(a,b,x);
return 0;
}
















































// // LOWER BOUND
// #include <bits/stdc++.h>
// using namespace std;
// int lower_bound(int a,int b[],int x){
//     int m;
//     int l = 0,h= a-1;
//     int flag = INT_MIN;
//     while(l <= h){
//         m = (l+h)/2;
//         if(b[m] >= x){
//             flag = b[m];
//         }
//         if(b[m] < x){
//             l = m + 1;
//         }
//         else{
//             h = m - 1;
//         }
//     }
// return flag;
// }
// int main(){
//     int a;cin>>a;
//     int b[a];
//     for(int i=0;i<a;i++) cin>>b[i];
//     int x;cin>>x;
//     cout<<lower_bound(a,b,x);
// return 0;
// }







// // LAST OCCURANCE
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int a,int b[],int x){
//     int l = 0 , h = a - 1;
//     int flag = -1;
//     while( l <= h){
//         int m = (l + h) / 2;
//         if(b[m] == x){
//             flag = m;
//             l = m + 1;
//         }
//         else if(b[m] > x){
//             h = m - 1;
//         }
//         else {
//             l = m + 1;
//         }
//     }
//     return flag;
// }
// int main(){
//     int a;
//     cin>>a;
//     int b[a];
//     for(int i=0;i<a;i++){
//         cin>>b[i];
//     }
//     int x;
//     cin>>x;
//     cout<<binary(a,b,x);
// return 0;
// }







// // FIRST OCCURANCE 
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int a,int b[],int x){
//     int l = 0,h = a - 1;
//     int flag = -1;
//     while(l <= h){
//         int m = (l + h) / 2;
//         if(b[m] == x){
//             flag = m;
//             h = m - 1;
//         }
//         else if (b[m] > x){
//             h = m - 1;
//         }
//         else{
//             l = m + 1;
//         }
//     }
//     return flag;
// }
// int main(){
//     int a;
//     cin>>a;
//     int b[a];
//     for(int i=0;i<a;i++){
//         cin>>b[i];
//     }
//     int x;cin>>x;
//     cout<<binary(a,b,x);
// return 0;
// }