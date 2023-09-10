// Assignment Coding Problem
// Problem Name: Check Permutation
// Problem Level: MEDIUM
// Problem Description: #### Given two strings, S and T, check if they are permutations of each other. Return true or false.
// #### Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
// ##### Note : Input strings contain only lowercase english alphabets.
// <br>

// ##### Input format : 
//     Line 1 : String 1
//     Line 2 : String 2
// ##### Output format :
//     'true' or 'false'
// ##### Constraints :
//     0 <= |S| <= 10^7
//     0 <= |T| <= 10^7
//     where |S| represents the length of string, S.
    
//  ##### Sample Input 1 : 
//     abcde
//     baedc

// ##### Sample Output 1 : 
//     true

// ##### Sample Input 2 : 
//     abc
//     cbd

// ##### Sample Output 2 : 
//     false
import java.util.*;
class checkPermutation{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        String b = sc.next();
        int sum1=0,sum2=0;
        for(int i=0;i<a.length();i++){
            sum1 = sum1 + (int)a.charAt(i);
        }
        for(int i=0;i<b.length();i++){
            sum2 = sum2 + (int)b.charAt(i);
        }
        if(sum1==sum2) System.out.println(true);
        else System.out.println(false);
    }
}