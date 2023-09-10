// tower of hannoi
import java.util.*;
class recursion6{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();String b="s",c="h",d="d";
        call(n,b,c,d);
    }
    public static void call(int n,String s,String h,String d){
        if(n==1) {
            System.out.println("trasfer disk "+n+" from "+s+" to "+d);
            return;
        }
        call(n-1,s,d,h);
        System.out.println("trasfer disk "+n+" from "+s+" to "+d);
        call(n-1,h,s,d);
    }
}