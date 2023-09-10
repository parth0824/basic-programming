#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvb vector<vector<bool>>
#define um unordered_map<int,int>
#define us unordered_set<int>
 
vvi ans;
void find_subset(vi &v,int t,vi help,int i,int sum){
    if(sum == t){
        ans.push_back(help);
        return ;
    }
    for(int j=i;j<v.size();j++){
        sum += v[j];
        help.push_back(v[j]);
        find_subset(v,t,help,j+1,sum);
        sum -= v[j];
        help.pop_back();
    }
}
int main(){
    int n;cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int t;cin>>t;
    vi help;
    find_subset(v,t,help,0,0);

    for(auto i : ans){
        for(auto j : i)cout<<j<<" ";cout<<" ";
    }
    cout<<endl<<ans.size()<<endl;
return 0;
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//             Scanner sc = new Scanner(System.in);
//             int n = sc.nextInt();
//             int[] arr = new int[n];
//             for (int i = 0; i < arr.length; i++) {
//                 arr[i] = sc.nextInt();
//             }
//             int t = sc.nextInt();
//             System.out.println("\n"+printSubSet(arr, 0, "", 0, t));

//         }
//         public static int printSubSet(int[] arr, int i, String ans, int sum, int target) {
//             if (i == arr.length) {
//                 if (sum == target) {
//                     System.out.print(ans);
//                     return 1;

//                 }
//                 return 0;
//             }

//             int fs=	printSubSet(arr, i + 1, ans + arr[i] + " ", sum + arr[i], target);
//             int ss=	printSubSet(arr, i + 1, ans, sum, target);
//             return fs+ss;
//         }

//     }
// 3
// 1 2 3
// 3
// 1 2 3 
// 2
