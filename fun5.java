import java.util.*;
class fun5 {
    public static void main(String args[])    {
        Scanner sc  = new Scanner (System.in);
        int a = sc.nextInt();
        printTable(a);
    }
    public static void printTable(int a){
        for(int i=1;i<=10;i++){
            System.out.println(a+"*"+i+"="+(a*i));
        }
    }
}