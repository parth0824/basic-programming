import java.util.*;
class arraylist1{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        ArrayList<Integer> a = new ArrayList<>();
        a.add(1);
        a.add(4);
        a.add(2);a.add(1);
        System.out.println(a);
        int b=a.get(1);
        System.out.println(b);
        a.add(2,9);
        System.out.println(a);
        a.set(2,10);
        System.out.println(a);
        a.remove(2);
        System.out.println(a);
        int d = a.size();
        System.out.println(d);

        for(int i=0;i<a.size();i++){
            System.out.println(a.get(i
            ));
        }
        Collections.sort(a);
        System.out.println(a);
    }
}