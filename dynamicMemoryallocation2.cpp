#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int **p = new int*[n];
    int arr[n];

    for(int i=0;i<n;i++){
        int m;cin>>m;
        arr[i] = m;
        p[i] = new int[m];
        for(int j=0;j<arr[i];j++){
            cin>>p[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            cout<<p[i][j]<<" ";
        }cout<<endl;
    }


    for(int i=0;i<n;i++){
        delete[] p[i];
    }

    delete []p;

}