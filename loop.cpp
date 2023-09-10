#include <bits/stdc++.h>
using namespace std;
int reverseInteger(int n){
    long long int ans = 0;
    while(n != 0){
        ans  = (ans * 10) + (n%10);
        n = n / 10;
    }
    // 1731324655----->5564231371
    if((ans > INT_MAX) || (ans < INT_MIN)) return -1;
    return ans;
}

int main(){
    // sum odf even numner till num
    // int num; cin>>num;
    // int i = 0;
    // int evenSum = 0;
    // while(num >= i){
    //     if((i % 2) == 0){
    //         cout<<i<<" ";
    //         evenSum = evenSum + i;
    //     }
    //     i++;
    // }cout<<endl;
    // cout<<evenSum<<endl;
    // is num is prime or not
    // int num; cin>>num;
    // int x = 2;
    // while(num > x){
    //     if((num % x) == 0){
    //         cout<<"not prime"<<endl;
    //         return 0;
    //     }
    //     x++;
    // }
    // cout<<"prime number"<<endl;
    // int a; cin>>a;
    // int x = a;
    // int num = 0;
    // for(int i = 0;i<a;i++){
    //     for(int j =0;j<a;j++){
    //         // cout<<"* ";
    //         // cout<<i+1<<" ";
    //         // cout<<j+1<<" ";
    //         // cout<<x - j;
    //         cout<<num<<" ";
    //         num++;
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=1;i<=num;i++ ){
    //     for(int j=i;j<=i+i-1;j++){
    //         cout<<j<<" ";
    //         // cout<<i+1<<" ";
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=i;j>=0;j--){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }
    // int num; cin>>num;
    // char a = 'A';
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num;j++){
    //         cout<<(a)<<" ";
    //     }
    //     a = a + 1;
    //     cout<<endl;
    // }
    // int a; cin>>a;
    // for(int i=0;i<a;i++){
    //     char x = 'A';
    //     for(int j=0;j<a;j++){
    //         cout<<x<<" ";
    //         x++;
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // char a = 'A' + num;
    // for(int i=0;i<=num;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     char a = 'A' + num - i - 1;
    //     for(int j=0;j<i+1;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }


    // with space star print practice
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num;j++){
    //         if(num-i <= j+1){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int num;cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num;j++){
    //         if(num - i == j) break;
    //         else cout<<"* ";
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=num-1;j>=0;j--){
    //         if(num-i-1 >= j) cout<<i+1;
    //         else cout<<" ";
    //     }cout<<endl;
    // }
    // int num; cin>>num;
    // for(int i=0;i<num;i++){
    //     int a = 1;bool b =true;
    //     for(int j=0;j<(2*num)-1;j++){
    //         if((num-i-1 <= j) && (j<num) ){
    //             cout<<a++;
    //         }
    //         else {
    //             if(num-i-1 >= j) cout<<" ";
    //             else if (j<i+num) {
    //                 if(b==true){a--;b=false;}
    //                 a--;
    //                 cout<<a;
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<<reverseInteger(1731324655);
    cout<<INT_MAX<<endl;
    cout<<INT_MIN;
return 0;
}