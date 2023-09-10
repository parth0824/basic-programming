import java.util.*;
class parth{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<b.length;i++){
            b[i] = sc.nextInt();
        }
        for(int i=0;i<b.length;i++){
            if((b[i]%3==0) && (b[i]%5==0)){
                continue;
            }
            else if(b[i]%3==0){
                System.out.print(b[i]+"  ");
            }
            else if((b[i]%5==0)){
                System.out.print(b[i]+"  ");
            }
        }
    }
}