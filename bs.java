import java.util.*;
class bs{
    public static void callMe(int b[] ,int c,int s,int m,int l){
        for(int i=0;;i++){
            m = (s+l)/2;
            if(c == b[m]){
                System.out.println(m);
                break;
            }
            if(s>l){
                System.out.println("NOT FOUND");
                break;
            }
            if(c > b[m]){
                s = m + 1;
            }
            if(c < b[m]){
                l = m - 1;
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<a;i++){
            b[i] = sc.nextInt();
        }
        int c = sc.nextInt();
        int s=0;
        int m = a/2;
        int l = b.length -1;
        callMe(b,c,s,m,l);
    }    
}