import java.util.*;
class q2{
    public static void main(String args[]){
        Scanner sc  = new Scanner (System.in);
        int a = sc.nextInt();
        System.out.print(oddSum(a));
    }
    public static int oddSum(int a){
        int sum=0;
        for(int i=0;i<=a;i++){
            if((i%2)!=0){
                sum=sum+i;
            }
            else{

            }
        }
    return sum;
    }
}