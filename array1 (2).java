import java.util.*;
class array1{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        String b[]=new String[a];
        for(int i=0;i<a;i++){
            b[i]=sc.next();
        }
        for(int i=0;i<b.length;i++){
            System.out.println(b[i]);
        }
    }
}