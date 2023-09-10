import java.util.*;
class mergeTwoSortedArray{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c [] = new int [a];for(int i=0;i<a;i++) c[i]=sc.nextInt();
        int d [] = new int [b];for(int i=0;i<b;i++) d[i]=sc.nextInt();
        int e [] = new int [a+b];
        int i=0,j=0,k=0;
        while((i<a)&&(j<b)){
            if(c[i]<d[j]){
                e[k] = c[i];
                i++;
                k++;
            }
            else {
                e[k] = d[j];
                j++;
                k++;
            }
        }
        while(i<a){
            e[k] = c[i];
                i++;
                k++;
        }
        while(j<b){
            e[k] = d[j];
            j++;
            k++;
        }for(int r=0;r<e.length;r++)
        System.out.print(e[r]+" ");        sc.close();

    }
}