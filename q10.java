import java.util.*;
class q10{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        fibonacci(a);
    } 
    public static void fibonacci(int a){
        int b[] = new int[a];
        b[0]=0;
        b[1]=1;
        for(int i=2;i<a;i++){
            b[i]=b[i-1]+b[i-2];
        }
        System.out.println("Start");
        for(int i=0;i<a;i++){
            System.out.println(b[i]);
        }
    }
}