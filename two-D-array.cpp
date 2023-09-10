#include <bits/stdc++.h>
using namespace std;
int main(){
    int tda[5][5];
    int sum[5] = {0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>tda[i][j];
            sum[i] = sum[i] + tda[i][j];
        }
    }
    int x = 0;
    int y = 0;
    for(int i=0;i<5;i++){
        if(sum[i] > x){
            x = sum[i];
            y = i;
        }
    }
    cout<<y<<endl;
return 0;
}