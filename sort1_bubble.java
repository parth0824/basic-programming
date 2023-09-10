import java.util.*;
class sort1_bubble{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[]=new int[a];
        for(int i=0;i<a;i++){
            b[i]=sc.nextInt();
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a-i-1;j++){
                if(b[j+1]<b[j]){
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1]=temp;
                }
            }
        }
        for(int i=0;i<a;i++){
            System.out.print(b[i]+" ");
        }
    }
}