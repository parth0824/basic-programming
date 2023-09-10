import java.util.*;
class array3{
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b[] = new int[a];
        for(int i=0;i<a;i++){
            b[i]=sc.nextInt();
        }
        int i;
        for(i=0;i<b.length-1;i++){
            if(b[i]<b[i+1]){

            }
            else{
                System.out.println("Array is not sorted in ascending order");
                return ;
            }
        }
        if(i==b.length-1){
            System.out.println("Array is sorted in ascending order");
            return ;
        }
    }
}