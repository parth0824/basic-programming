import java.util.*;
public class arrayList1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        ArrayList<Integer> a = new ArrayList<>();
        // System.out.println(a.size());
        a.add(20);
        a.add(25);
        a.add(30);
        a.add(35);
        a.add(2,80);
        // System.out.println(a.size());
        // System.out.println(a.get(2));
        // System.out.println(a.get(3));
        // for(int i=0;i<a.size();i++){
        //     System.out.println(a.get(i));
        // }
        System.out.println(a);
        a.remove(2);
        System.out.println(a);
        a.set(2,0);
        System.out.println(a);
    }
}