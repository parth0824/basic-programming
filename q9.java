import java.util.*;
class q9{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        greatestCommonDivisor(a,b); 
    }
    public static void greatestCommonDivisor(int a,int b){
        int c, d=0;
        if(a>=b) c=a;
        else c=b;
        for(int i=1;i<c;i++){
            if(((a%i)==0)&&((b%i)==0)){
                d=i;
            }
            else{

            }
        }
        System.out.println(d);
    }

}