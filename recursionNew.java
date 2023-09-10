import java.util.*;
public class recursionNew{
    public static StringBuilder removeX(StringBuilder a,int b){
        if(b==a.length()){
            return a;
        }
        char c = a.charAt(b);
        if(c=='x'){
            a.delete(b,b+1);
        }
        else{
            b++;
        }
        return removeX(a,b);
    }
public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        StringBuilder b = new StringBuilder(a);
        System.out.print(removeX(b,0));
    }
}