// print factorial
import java.util.*;
class recursion3{
    public static void main (String rgs[]){
        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        System.out.print(factorial(a));
    }
    public static int factorial(int a){
        if(a==1){
            return 1;
        }
        int f=a;
        f=f*(factorial(a-1));
        return  f;
    }
}