import java.util.*;
class stringbuilder{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);

        String b= sc.nextLine();
        StringBuilder a = new StringBuilder(b);
        System.out.println(a);
        System.out.println(a.charAt(1));
        a.setCharAt(0,'r');
        System.out.println(a);

        a.insert(2, 'e');
        System.out.println(a);

        a.delete(0, 3);
        System.out.println(a);

        a.append(" gupta");
        System.out.println(a);
    }
}