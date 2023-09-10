import java.util.*;
class fun2 {
    public static void main(String args[]){
        int a,b;
        Scanner sc = new Scanner (System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.print(sumOfTwoNumbers(a,b));
    }
    public static int  sumOfTwoNumbers(int a,int b){
        int c=a+b;
        return c;
    }
}
