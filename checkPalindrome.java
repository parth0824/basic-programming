// Assignment Coding Problem
// Problem Name: Check Palindrome (recursive)
// Problem Level: MEDIUM
// Problem Description: Check whether a given String S is a palindrome using recursion. Return true or false.

// ##### Input Format : 
//     String S

// ##### Output Format : 
//     'true' or 'false'

// ##### Constraints :
//     0 <= |S| <= 1000
//     where |S| represents length of string S.
//  #####Sample Input 1 :
//     racecar

// #####Sample Output 1:
//     true

// #####Sample Input 2 :
//     ninja

// #####Sample Output 2:
//     false
import java.util.*;
class checkPalindrome{
    public static boolean Palindrome(String a,int s,int l){
        if(s==l || l<s){
            return true;
        }
        boolean b = a.charAt(s) == a.charAt(l);
        if(b==false){
            return false;
        }
        s++;l--;
        return Palindrome(a,s,l);

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        int s=0,l=a.length()-1;
        System.out.print(Palindrome(a,s,l));
    }
}