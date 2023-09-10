import java.util.*;
class fun4 {
    public static void main(String args[])    {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        primeOrnot(a);
    }
    public static void primeOrnot(int a){
        int i;
        for( i = 2;i<a;i++){
            if((a%i)==0){
                break;
            }
            else{

            }
        }
        if(i==a){
            System.out.print("Prime.");
        }
        else{
            System.out.print("Not Prime.");

        }

    }
}