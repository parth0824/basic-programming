import java.util.*;
class q7{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        call(a);
    }
    public static void call(int a){
        int b[];
        b = new int[a];
        int p=0,n=0,z=0;
        for(int i=0;i<a;i++) {
            Scanner c = new Scanner(System.in) ;
            b[i]=c.nextInt();
        }
        for(int i=0;i<a;i++){
            if(b[i]>0){
                p++;
            }
            else if(b[i]<0){
                n++;
            }
            else{
                z++;
            }
        }
        System.out.println(p);
        System.out.println(n);
        System.out.println(z);
    }
}