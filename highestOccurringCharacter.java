// Assignment Coding Problem
// Problem Name: Highest Occurring Character
// Problem Level: MEDIUM
// Problem Description: #### Given a string, S, find and return the highest occurring character present in the given string. 
// ##### If there are 2 characters in the input string with same frequency, return the character which comes first.
// <br>

// ##### Note : Assume all the characters in the given string are lowercase.
// <br>

// ##### Input format :
//     String S
// ##### Output format :
//     Highest occurring character
// ##### Constraints :
//     0 <= |S| <= 10^7
//     where |S| represents the length of string, S.
//  ##### Sample Input 1:
//     abdefgbabfba

// ##### Sample Output 1:
//     b

// ##### Sample Input 2:
//     xy

// ##### Sample Output 2:
//     x
import java.util.*;
class highestOccurringCharacter{
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        int b [] = new int [26];
        char max;
        int m = 0;
        for(int i=0;i<a.length();i++){

            int c = (int)(a.charAt(i)) - 97;

            b[c] = b[c] + 1;

        }
        int k = Integer.MIN_VALUE;
        for(int i=0;i<b.length;i++) k = Math.max(k,b[i]);
        for(int i=0;i<b.length;i++){
            if(k==b[i]){
                System.out.print((char)(i+97));
                break;
            }
        }

    }
}