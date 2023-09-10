import java.util.*;
class recursion11{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        String c="";
        int i=0;
        int co=0;
        moveXToLast(a,c,i,co);
    }
    public static void moveXToLast(String a,String c,int i,int co){
        if(i==a.length()){
            for(int d=0;d<co;d++){
                c=c+'x';
            }
            System.out.println(c);
            return ;
        }
        if(a.charAt(i)!='x'){
            c=c+a.charAt(i);
        }
        else{
            co++;
        }
        i++;
        moveXToLast(a,c,i,co);
    }
}