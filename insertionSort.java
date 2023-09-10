import java.util.*;
class insertionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<a;i++){
            b[i]=sc.nextInt();
        }int j;
        for(int i=1;i<a;i++){
            for(j=i-1;j>=0;j--){
                if(b[j]>b[i]){
                    b[j+1]=b[j];
                }
            }
            // b[j+1]=b[i]/;
        }for(int i=0;i<a;i++)System.out.print(b[i]+" ");        sc.close();

    }
}

