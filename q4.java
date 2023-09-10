import java.util.*;
class q4{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        double a = sc.nextFloat();
        System.out.print(circumference(a));
    }
    public static double circumference(double a){
        double c = a*3.14*2;
        return c;
    }
}