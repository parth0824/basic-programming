// /*    
//         1
// 	2	3	2
// 3	4	5	4	3
// 	2	3	2
// 		1
// */

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;cin>>a;
//     for(int i=0;i<a;i++){
//         int x = 1+i;
//         for(int j=0;j<a-i-1;j++){
//             cout<<"     ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<x<<"    ";
//             x++;
//         }
//         x--;
//         for(int j=0;j<i;j++){
//             x--;
//             cout<<x<<"    ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<a-1;i++){
//         int x = a-i-1;
//         for(int j=0;j<i+1;j++){
//             cout<<"     ";
//         }
//         for(int j=0;j<a-i-1;j++){
//             cout<<x<<"    ";
//             x--;
//         }
//         x++;
//         for(int j=0;j<a-1-i-1;j++){
//             x++;
//             cout<<x<<"    ";
//         }
//         cout<<endl;

//     }
// }







/*    
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    for(int i=0;i<a;i++){
        int x = 1+i;
        for(int j=0;j<a-i-1;j++){
            cout<<"\t";
        }
        for(int j=0;j<i+1;j++){
            cout<<x<<"\t";
            x++;
        }
        x--;
        for(int j=0;j<i;j++){
            x--;
            cout<<x<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<a-1;i++){
        int x = a-i-1;
        for(int j=0;j<i+1;j++){
            cout<<"\t";
        }
        for(int j=0;j<a-i-1;j++){
            cout<<x<<"\t";
            x++;
        }
        x--;
        for(int j=0;j<a-1-i-1;j++){
            x--;
            cout<<x<<"\t";
        }
        cout<<endl;

    }
}