import java.util.*;
class collectionFrameWork {

public static void main(String args[]){
        ArrayList <Integer> a= new ArrayList<>();
        a.add(1);a.add(2);a.add(3);
        a.add(7);
        // System.out.println(a.get(3));
        for(int i=0;i<a.size();i++){
            // System.out.println(a.get(i));
        }
        a.add(2,10000);
        for(int i=0;i<a.size();i++){
            // System.out.println(a.get(i));
        }
        a.set(2,999);
        System.out.println(a);
    }
}
