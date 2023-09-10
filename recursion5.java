import java.util.*;
class recursion5{
    static int d=2;
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int b = sc.nextInt();
        int c = sc.nextInt();
        m(b,c);
    }
    public static void m(int b,int c){
        if(c==0){
            System.out.print(1);
            return ;
        }
        if(c==1){
            System.out.print(b);
            return;
        }
        b=b*d;
        m(b,c-1);
    }
}