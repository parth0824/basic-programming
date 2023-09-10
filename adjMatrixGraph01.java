import java.util.*;
// adjacency list graph representation 
public class adjMatrixGraph01 {
    int v;
    int m[][];
    adjMatrixGraph01(int v){
        this.v = v;
        m = new int[v][v];
    }
    public void addVer(int s,int d){
        m[s][d] = 1;
        m[d][s] = 1;
    }
    public void print(){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                System.out.print(m[i][j]+"  ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter number of edges");
        int e = sc.nextInt();
        System.out.println("enter number of vertix");
        int v = sc.nextInt();
        adjMatrixGraph01 a = new adjMatrixGraph01(v);
        for(int i=0;i<e;i++){
            System.out.println("enter the source:");
            int s = sc.nextInt();
            System.out.println("enter the destination:");
            int d = sc.nextInt();
            a.addVer(s, d);
        }
        a.print();
        sc.close();
    }
}