import java.util.*;
//   print ftom 1 to n 
public class recursion1 {
    public static void main (String args[]){

        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        System.out.println("Start----->");
        callme(a);
    }
    public static void callme(int a){
        if(a==0){    // base case
            return ;
        }
        callme(a-1);    // recurtion call
        System.out.println(a);   //  print
        
    }
}
