import java.util.Scanner;

public class dataType {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 123;
        int sum = 0;
        int m = 1;
        while(a > 0){
            int x = a % 5;
            sum = sum + x*m;
            a = a/5;
            m = m * 5;
        }
        System.out.println(sum);
        sc.close();
    }
}