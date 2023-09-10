#include<iostream>
using namespace std;
int main(){
    /*
    int i = 0;
    int & j= i;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */
//    int a = 13;
//    int* p = &a;
//    if(sizeof(a) == sizeof(p))cout<<"equal"<<endl;
/*
int* a = new int;
*a = 5;
cout<<sizeof(a)<<endl;
cout<<*a<<endl;
*/



/*
int n=5;
int *p = new int;
p = &n;
cout<<n<<endl;
cout<<&p<<endl;
*/

// int n;cin>>n;
// int *aptr = new int[n];
// for(int i=0;i<n;i++)cin>>aptr[i];
// for(int i=0;i<n;i++)cout<<aptr[i];
// delete aptr;cout<<endl;
// for(int i=0;i<n;i++)cout<<aptr[i]<<" ";



/*

int n;cin>>n;
int* arr = new int[n];//heap mee memory allocate hogi 
 delete []arr;
*/


/*

    int n,m;cin>>n>>m;
    int **arr = new int *[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
*/

int n;cin>>n;

int** arr = new int[n];


}