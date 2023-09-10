#include <bits/stdc++.h>
using namespace std;
void bracket (int n,int i,string s,int a,int b){
    if(i >= n*2){
        cout<<s<<endl;
        return ;
    }
    if(a < n)
        bracket(n,i+1,s+"(",a+1,b);
    if(b < n && s.size() > 0 && a > b)
    // if( a > b)
        bracket(n,i+1,s+")",a,b+1);
}
int main(){
    int n,i=0;cin>>n;
    string s="";
    int a,b;a=b=0;
    bracket(n,i,s,a,b);
return 0;
}
































// #include <bits/stdc++.h>
// using namespace std;
//     void bracket(int n, int i, string s, int a, int b, vector<string> &ans)
//     {
//         if (i >= n * 2)
//         {
//             ans.push_back(s);
//             return;
//         }
//         if (a < n)
//             bracket(n, i + 1, s + "(", a + 1, b, ans);
//         if (b < n && s.size() > 0 && a > b)
//             bracket(n, i + 1, s + ")", a, b + 1, ans);
//     }
//     vector<string> mainn(int n)
//     {
//         int i = 0;
//         string s = "";
//         int a, b;
//         a = b = 0;
//         vector<string> ans;
//         bracket(n, i, s, a, b, ans);

//         return ans;
//     }

//     vector<string> generateParenthesis(int n)
//     {
//         vector<string> ans;
//         ans = mainn(n);
//         return ans;
//     }



// int main(){
//     int n;cin>>n;
//         vector<string> ans;
//     ans = generateParenthesis(n);
//     for(auto i : ans)cout<<i<<endl;
// return 0;
// }