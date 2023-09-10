import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc  = new Scanner (System.in);
        int a = sc.nextInt();
        Stack<Integer> s = new Stack<>();
        for(int i=0;i<a;i++){
            int b = sc.nextInt();
            s.push(b);
        }
        int t = a/2;
        for(int i=0;i<s.size();i++){
          System.out.print(s.get(i));
        }
        s.remove(t);
        for(int i=0;i<s.size();i++){
          System.out.print(s.get(i));
        }
        // for(int i=s.size() -1 ; i<=0;i--){
        //     System.out.print(s.get(i)+" ");
        // }
    }
}