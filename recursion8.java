import java.util.*;
class recursion8{
    public static  void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        int b = a.length();
        reverse(a,b);
    }
    public static void reverse (String a,int b){
        if(b==1){
            System.out.print(a.charAt(b-1));
            return ;
        }
        System.out.print(a.charAt(b-1));
        b--;
        reverse(a,b);
    }
}