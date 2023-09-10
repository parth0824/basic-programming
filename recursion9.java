import java.util.*;
class recursion9{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        int b = a.length();
        char c = sc.next().charAt(0);int f=-1,l=-1,i=0;
        occurance(a,b,c,f,l,i);
    }
    public static void occurance(String a,int b,char c,int f,int l,int i){
        if(i==b-1){
            if(c==a.charAt(i)){
                if(f==-1){
                    f=i;
                }
                l=i;
            }
            System.out.println("first:"+f+"\n last:"+l);
            return ;
        }
        if(c==a.charAt(i)){
            if(f==-1){
                f=i;
            }
            l=i;
        }
        occurance(a,b,c,f,l,i+1);
    }
}