import java.util.*;
public class rohitSir{
    // x =  energy , k = tele use
    public static int fiveStar(int a[],int x,int k){
        int b[] = new int[a.length-1];
        for(int i=0;i<b.length;i++){
            b[i] = a[i+1] - a[i];
        }  

        int _city=1;
        int _sum=0;
        for(int i=0;i<a.length;i++){
            _sum = _sum + a[i];
            if(_sum<x){

                _city++;
            }else break;

        }
        while(k>0){
            k--;
            if(_city==a.length){
                return _city;
            }
            else _city++;
        }
        return _city;
    }
    public static void main(String[] args) {
        Scanner sc  = new Scanner (System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        int x = sc.nextInt();
        int k = sc.nextInt();
        for(int i=0;i<a.length;i++) a[i] = sc.nextInt();
        System.out.print(fiveStar(a,x,k));
    }
}
