#include <bits/stdc++.h>
using namespace std;
     void fun(int arr[]) {
        cout << arr[0] << " ";
    }
    int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    cout<<x<<endl;
    return x + y + z;
}
int main(){
/*
    int num = 5;
    cout<<"value of num is : "<<num<<endl;
    int* ptr1 = &num;
    cout<<"value of ptr1 is : "<<ptr1<<endl;
    cout<<"address value of ptr1 is : "<<*ptr1<<endl;

    int** ptr2 = &ptr1;
    cout<<"value of ptr2 is : "<<ptr2<<endl;
    cout<<"address value of ptr2 is : "<<*ptr2<<endl;

    cout<<"\n\n\ndiff way to print the value of ptr1\n";

    cout<<&num<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;
    cout<<"\n\n\n\n";
*/

/*
         int a = 70;
        square(&a);
        cout << a << endl;
    
*/
/*
    char p[]={'a','b','c','d'};
    // int *p = a++;
    // cout *p << endl;
    cout<<(*p)+1;
*/


    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);

return 0;
}