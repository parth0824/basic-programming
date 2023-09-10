// Assignment Coding Problem
// Problem Name: Reverse Each Word
// Problem Level: MEDIUM
// Problem Description: #### Given a string S, reverse each word of a string individually. For eg. if a string is "abc def", reversed string should be "cba fed". 

// ##### Input Format : 
//     String S

// ##### Output Format : 
//     Modified string

// ##### Constraints :
//     0 <= |S| <= 10^7
//     where |S| represents the length of string, S.
//  ##### Sample Input 1:
//     Welcome to Coding Ninjas

// ##### Sample Output 1:
//     emocleW ot gnidoC sajniN

// ##### Sample Input 2:
//     Give proper names to variables and functions

// ##### Sample Output 2:
//     eviG reporp seman ot selbairav dna snoitcnuf
import java.util.*;
class reverseEachWord{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.nextLine();a=a+' ';
        String b="";
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)==' '){
                for(int j = b.length() -1;j>=0;j--){
                    System.out.print(b.charAt(j));
                }
                System.out.print(" ");
                b="";
            }
            else{
               b = b + a.charAt(i);
            }
        }
    }
}