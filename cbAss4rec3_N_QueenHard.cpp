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
 
ll ans = 0;


bool isSafe(bool &v[][],int size,int i,int j){

    int a = i;
    int b =  j;


  
    while(a >= 0 && b < size){
        if(v[a][b]){
            return false;
        }
        a--;
        b++;
    }

       a = i;
    b = j;

    // left digonal
    while(a >= 0 && b >= 0){
        if(v[a][b]){
            return false;
        }
        a--;
        b--;
    }

    a = i;
    b = j;

    // upper
    while (a >= 0){
        if(v[a][b]){
            return false;
        }
        a--;
    }

    return true;
    
}
void pathOfQueen(int &v[][],int size,int i,int n ){
    if(n == 0){ans++;return ;}
    for(int j=0;j<size;j++){
        if(isSafe(v,size,i,j)){
            v[i][j] = 1;
            pathOfQueen(v,size,i+1,n-1);
            v[i][j] = 0;
        }
    }

}
int main(){
    int n;cin>>n;
    bool v[n][n] ={0};
    pathOfQueen(v,n,0,n);
    cout<<ans<<endl;
return 0;
}



