import java.util.*;
public class recursion_1 {
    private static boolean checkSort(int a,int b[]){
        if(a==b.length-1){
            return true;
        }
        boolean c = b[a] < b[a+1];
        if(c==false){
            return false;
        }
        a++;
        return checkSort(a,b);
    }
    public static boolean checkSort(int b[]){
        return checkSort(0,b);

    }
    public static void main(String args[]){
        Scanner sc  = new Scanner(System.in);
        int a = sc.nextInt();
        int b[] = new int[a];
        for(int i=0;i<a;i++) b[i] = sc.nextInt();
        sc.close();
        System.out.print(checkSort(b));
    }
}