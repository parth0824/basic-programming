// #include <bits/stdc++.h>
// using namespace std;
// void print_countion(int num){
//     int i = 1;
//     while(i <= num){
//         cout<<i<<"  ";
//         i++;
//     }
// return ;
// }
// int setBit(int n){
//     int i = 1;
//     int ans  = 0;
//     while(n != 0){
//         if((n & 1) == 1){
//             ans++;
//         }
//         n = n >> 1;
//     }
//     return ans;
// }
// int fibo(int n){
//     if(n == 1)return 0;
//     if(n == 2)return 1;
//     int i = 0;
//     int k = 1;
//     n = n - 2;
//     int ans = 1;
//     while(n--){
//         ans = i + k;
//         i = k;
//         k = ans;
//     }
//     return ans;
// }
// int main(){
//     // int num; cin>>num;
//     // switch(num){
//     //     case 1:
//     //         cout<<"this is the first case !!!!"<<endl;
//     //         break;
//     //     case 2:
//     //         cout<<"this is in second case !!!!"<<endl;
//     //         break;
//     //     default:
//     //         cout<<"not in any case";
//     // }
//     int num; cin>>num;
//     // cout<<setBit(num);
//     cout<<fibo(num);
//     // print_countion(num);
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void call_me(int &num)
{
    num++;
    cout << "The number num inside the function is " << num << endl;
    return;
}
int MAX(int arr[], int size)
{
    int m = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}
int MIN(int arr[], int size)
{
    int m = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    return m;
}
int main()
{
    // int num; cin>>num;
    // cout<<"The number num is "<<num<<endl;
    // call_me(num);
    // cout<<"The number num is "<<num<<endl;
    // int a[5] = {0};
    // for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    //     cout<<a[i]<<" ";
    // }
    int size;
    cin >> size;
    int arr[10000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = MAX(arr, size);
    int min = MIN(arr, size);
    cout << max << endl;
    cout << min << endl;
}