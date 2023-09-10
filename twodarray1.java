import java.util.*;
class twodarray1{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c[][] = new int[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                c[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter the number:");
        int d=sc.nextInt();
        int s,t;
        for(s=0;s<a;s++){
            for(t=0;t<b;t++){
                if(c[s][t]==d){
                    System.out.println(s+"  "+t);
                    return;
                }
            }
        }
    return ;
    }
}