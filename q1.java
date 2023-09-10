import java.util.*;
public class q1 {
    public static void main(String args[]){
        Scanner sc  = new Scanner (System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();
        System.out.print(avg(a,b,c));
    }
    public static float avg(float a,float b,float c){
        return ((a+b+c)/3);
    }
}