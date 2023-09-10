// calculate fibonacci
import java.util.*;
class recursion4{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt(),b=0,c=1;
        f(a,b,c);
    }
    public static void f(int a,int b,int c){
        if(a==(0)||a==(1)){
            if(a==1){
                
            }
            return ;
        }
        System.out.println(b);
        System.out.println(c);
        b=b+c;
        c=b+c;
        a=a-2;
        f(a,b,c);
    }
}