import java.util.*;
//   print sum of n number
public class recursion2 {
    public static void main (String args[]){

        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        System.out.println("Start----->");
        System.out.print(callMe(a));
    }
    public static int callMe(int a){
        if(a==0){    // base case
            return 0;
        }
        int sum=a;
        sum=sum+callMe(a-1);
        return sum;
    }
}
