import java.util.*;
public class sudfugjs {
    public static int call(String a){
        if(a.length() < 4){
            return 0;
        }
        int b = 0 , c = 0;
        for(int i=0;i<a.length();i++){
            if(a.charAt(i) >= '0' && a.charAt(i) <= '9'){
                b++;
            }
            if(a.charAt(i) >= 65 && a.charAt(i) <=90){
                c++;
            }
            if(a.charAt(i) == ' ' || a.charAt(i) == '/'){
                return 0;
            }
        }
        if(b == 0 || c == 0){
            return 0;
        }
        if(a.charAt(0) >= '0' && a.charAt(0) <= '9'){
            return 0;
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        System.out.println(call(a));
    }
}