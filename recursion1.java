import java.util.*;
class recursion1 {
    static int e=0;
    public static int fib(int x){
        if(x==0) return 0;
        if(x==1) return 1;
        return fib(x-1) + fib(x-2);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int x = sc.nextInt();
        System.out.print(fib(x));
        sc.close();
    }
}