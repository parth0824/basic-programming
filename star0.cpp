#include <iostream>
using namespace std;
    int subtractProductAndSum(int n) {
        int a = n;
        int s = 0;
        int m = 1;
        for(int i=0;;i++){
            if(a>=10){
                int b = a % 10;
                s = b + s;
                m = b * m;
                a = a / 10;
            }
            else{
                s = s + a;
                m = m * a;
                break;
            }
        }
        return m - s;
    }
int main(){
    int a = 234;
    cout<<subtractProductAndSum(a);
}