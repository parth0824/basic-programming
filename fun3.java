import java.util.*;
class fun3{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        evenOrOdd(a);
    }
    public static void evenOrOdd(int a){
        if((a%2)==0){
            System.out.print("even");
        }
        else{   
            System.out.print("odd");
        }
    return ;
    }
}