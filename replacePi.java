// Assignment Coding Problem
// Problem Name: Replace pi (recursive)
// Problem Level: MEDIUM
// Problem Description: ####Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
//  #####Sample Input 1 :
//     xpix

// #####Sample Output :
//     x3.14x

// #####Sample Input 2 :
//     pipi

// #####Sample Output :
//     3.143.14

// #####Sample Input 3 :
//     pip

// #####Sample Output :
//     3.14p
import java.util.*;
public class replacePi{
    public static StringBuilder REPLACEPI(StringBuilder a){
        if(a.indexOf("pi")<0){
            return a;
        }
            int index = a.indexOf("pi");
            a.replace(index, index+2,"3.14");
            return REPLACEPI(a);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        StringBuilder b = new StringBuilder(a);
        System.out.print(REPLACEPI(b));
    }
}