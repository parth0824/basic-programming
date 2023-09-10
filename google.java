import java.util.*;
public class google {
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        int mi = 0;
        String si = "";
        int t = 0;
        for(int i=0;i<a.length();i++){
            char b = a.charAt(i);
            if(b == ' '){
                t = Integer.max(t,mi);
            }
            else {
                mi++;
                si = si + b;
            }
        }

    }
}
