#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<"BEFORE------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
    // sorting start
    for(int i=0;i<a-1;i++){
        bool x = false;
        for(int j=0;j<a-i-1;j++){
            if(b[j] > b[j+1]){
                x = true;
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
        // optimizeing the code 
        if(x == false){
            break;
        }
	}
    cout<<"AFTER------->"<<endl;
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}
75
// 975 4