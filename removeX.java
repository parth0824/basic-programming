// public Assignment Coding Problem
// Problem Name: Remove X
// Problem Level: MEDIUM
// Problem Description: #### Given a string, compute recursively a new string where all 'x' chars have been removed.

// ##### Input format :
//     String S

// ##### Output format :
//     Modified String

// ##### Constraints :
//     1 <= |S| <= 10^3
//     where |S| represents the length of string S. 
//  ##### Sample Input 1 :
//     xaxb

// ##### Sample Output 1:
//     ab

// ##### Sample Input 2 :
//     abc

// ##### Sample Output 2:
//     abc

// ##### Sample Input 3 :
//     xx

// ##### Sample Output 3:

import java.util.*;
public class removeX{
    public static StringBuilder REMOVE_x(StringBuilder a){
        if(a.indexOf("x")<0){
            return a;
        }
        int b = a.indexOf("x");
        a.replace(b,b+1,"");
        return REMOVE_x(a);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        StringBuilder b = new StringBuilder(a);
        System.out.print(REMOVE_x(b));
    }
}