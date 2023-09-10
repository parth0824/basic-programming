import java.util.*;
class q8{
    public static void main(String args[]){
        Scanner sc  = new Scanner (System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        int a=x;
        for(int i=1;i<n;i++){
            a=a*x;
        }
        System.out.println(a);
    }
}