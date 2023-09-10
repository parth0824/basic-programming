
// fibonaci numbers
// #include <bits/stdc++.h>
// using namespace std;
// int fibo(int n){
//     if(n == 0 || n == 1)return n;
//     return (fibo(n-1) + fibo(n-2));
// }
// int main(){
//     int n;cin>>n;
//     cout<<fibo(n)<<endl;
// return 0;
// }

// find all subsequence 
// #include <bits/stdc++.h>
// using namespace std;
// void subsequence(string a,string b){
//     if(a.size() == 0){
//         cout<<b<<" ";
//         return;
//     }
//     char c = a[0];
//     subsequence(a.substr(1,2),b);
//     subsequence(a.substr(1,2),b+c);

// }
// int main(){
//     string a = "abcd";
//     string b = "";
//     subsequence(a,b);
// }

// toss n coins
#include <bits/stdc++.h>
using namespace std;
void toss(int n,string s){
    if(n == 0){
        cout<<s<<endl;
    return ;
    }
    // cout<<n<<" "<<s<<endl;
    // if(s.size()==0 || s[s.size()-1]!='h')
    toss(n-1,s+"h");
    toss(n-1,s+"t");
}
int main(){
    int n;cin>>n;
    string s ="";
    toss(n,s);


return 0;
}

