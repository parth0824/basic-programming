import java.util.*;
class adjListGraph02{
    static ArrayList <ArrayList<Integer>> a ;

    public static void insert(int s,int d){
        a.get(s).add(d);
        a.get(d).add(s);
    }
    public static void print(){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.get(i).size();j++){
                System.out.println(a.get(i).get(j)+"  ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        a = new ArrayList<ArrayList<Integer>>(x);
        for(int i=0;i<x;i++){
            a.add(new ArrayList<Integer>());    
        }
        for(int i=0;i<x;i++){
            int s = sc.nextInt();
            int d = sc.nextInt();
            insert(s,d);
        }
        print();
    }
}