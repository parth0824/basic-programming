import java.util.Scanner;
class sum{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int[a];
        for(int i=0;i<a;i++){
            b[i]=sc.nextInt();
        }
        int key = sc.nextInt();
        int s=0,e=b.length-1,m=b.length/2;int r=0;
        while(s<=e){
            m=(s+e)/2;
            if((key==b[m])){
                System.out.println(m);r++;
                break;
            }
            else if(key>b[m]){
                s=m+1;
            }
            else if(key<b[m]){
                e=m-1;
            }
        }
        if(r!=1) 
            System.out.println("not found");       
    }
}