import java.util.*;
// class recursion7{
//     public static void main(String args[]){
//         Scanner sc = new Scanner (System.in);
//         String a = sc.nextLine();
//         StringBuilder b = new StringBuilder(a);
//         call(b);
//     }
//     public static void call(StringBuilder c){
//         if(c.length()==0){
//             return ;
//         }
//         int b = c.length()-1;
//         System.out.println(c.charAt(b));
//         c.delete(b,b+1);
//         call(c);
//     }
// }
class recursion7{
    public static void main (String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        reverse(a,a.length()-1);
    }
    public static void reverse(String a,int b){
        if(b<0){
            return;
        }
        System.out.print(a.charAt(b));
        reverse(a, b-1);
    }
}