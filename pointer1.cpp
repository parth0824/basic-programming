#include <iostream>
using namespace std;
int main(){
    /*
    int num = 5;
    cout<<num<<"\n"<<"The address of num is "<<&num<<endl;
    int *ptr = &num;
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; 


    // num += 20;

    // cout<<num<<endl; 
    (*ptr)++;
    // cout<<num<<endl; 



    int *nptr = ptr;
    cout<<nptr<<endl; 
    cout<<*nptr<<endl;

    */

/*
    int num = 5;
    int *ptr = &num;
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; 

    int *nptr = ptr;
    cout<<nptr<<endl; 
    cout<<*nptr<<endl;


    cout<<*ptr-*nptr<<endl;
*/

int num = 5;
int *ptr = &num;
cout<<num<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

ptr = ptr + 1;

cout<<"now pointer will store new var address will new value new pointer value\n ";
cout<<*ptr<<endl;
cout<<ptr<<endl;



return 1;
}