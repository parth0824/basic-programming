#include <iostream>
using namespace std;
int main(){
    // int a;cin>>a;
    // while(1){switch(a){
    //     case 1:
    //             cout<<"in one";
    //             break;
    //     case 2:
    //             cout<<"in two";
    //             exit(-1);
    //             break;
    //     case 3:
    //             cout<<"in three";
    //             break;
    //     case 4:
    //             cout<<"in four";
    //             break;
    //     default:
    //             cout<<"default";
    // }
    
    // }
    while(1){
        cout<<"ENTER THE NUMBERS:";
        int a,b;cin>>a>>b;
        cout<<"ENTER THE OPERATION(+ , - , * , / , %) YOU WANT TO PERFORM:";
        char c;cin>>c;
        end:
        switch(c){
            case '0':
                cout<<"THANK YOU."<<endl;
                exit(0);
            case '+':
                cout<<a + b<<endl;
                break;
            case '-':
                cout<<a - b<<endl;
                break;
            case '*':
                cout<<a * b<<endl;
                break;
            case '/':
                cout<<a / b<<endl;
                break;
            case '%':
                cout<<a % b<<endl;
                break;
            default :
                cout<<"OPERATION DOES NOT MATCH"<<endl;
                cout<<"TO EXIT ENTER 0:"<<endl;;
                c = '0';
                goto end;
                break;
        }
    }
}