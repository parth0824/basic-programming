import java.util.*;
class selectionSort {
    public static void main(String[] args) {
       Scanner sc  = new Scanner (System.in);
       int a = sc.nextInt();
       int b[] = new int [a];
       int c[] = new int []{2,4,5};
       for(int i=0;i<a;i++){
           b[i] = sc.nextInt();
       }
       for(int i=0;i<a-1;i++){
           for(int j=i+1;j<a;j++){
               if(b[i]>b[j]){
                   int temp = b[i];
                   b[i] = b[j];        sc.close();

                   b[j] = temp;
               }
           }
       }
       for(int i=0;i<a;i++){
            System.out.print(b[i]);
        }
    }
}