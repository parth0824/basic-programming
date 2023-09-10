import java.util.Scanner;

class sort {
    public void call(int b[],int c,int d){
        if(b[d] == c){
            System.out.println(1);
            return ;
        }
        if(d == b.length){
            System.out.println(0);
            return ;
        }
        call(b,c,++d);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b [] = new int [a];
        for(int i=0;i<a;i++){
            b[i] = sc.nextInt();
        }
        int c = sc.nextInt();
        int d = 0;
        sort s = new sort();
        s.call(b,c,d);
    }
}