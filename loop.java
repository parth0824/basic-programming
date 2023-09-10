import java.util.*;
public class loop {
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a = 0 , b = 1 , c = 0;
        int n = sc.nextInt();
        if(n >= 0){
            c = 0;
        }
        if(n >= 1){
            c = 1;
        }
        for(int i=2;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }
        System.out.print(c);
        
    }
}
