import java.util.*;
class array2{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        int b[]=new int [a];
        for(int i=0;i< a;i++){
            b[i]=sc.nextInt();
        }
        int max=Integer.MIN_VALUE,min=Integer.MAX_VALUE;
        for(int i=0;i<b.length;i++){
            if(max<b[i]) max=b[i];
            if(min>b[i]) min=b[i];
        }
        System.out.println(max);
        System.out.println(min);
    }
}