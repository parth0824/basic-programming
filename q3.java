import java.util.*;
class q3{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.print(greater(a,b));
    }
    public static int greater(int a,int b){
        if(a>b)
            return a;
        else if(b>a)
            return b;
        return 0;
    }
}