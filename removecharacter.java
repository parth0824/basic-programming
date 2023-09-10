// Assignment Coding Problem
// Problem Name: Remove character
// Problem Level: MEDIUM
// Problem Description: #### Given a string and a character x. Write a function to remove all occurrences of x character from the given string. 
// ##### Leave the string as it is, if the given character is not present in the string.
// <br>

// ##### Input Format :
//     Line 1 : String S
//     Line 2 : Character c
// ##### Output Format :
//     Modified string
// ##### Constraints :
//     0 <= |S| <= 10^7
//     where |S| represents the length of string, S.
//  ##### Sample Input 1: 
//     welcome to coding ninjas
//     o

// ##### Sample Output 1: 
//     welcme t cding ninjas

// ##### Sample Input 2: 
//     Think of edge cases before submitting solutions
//     x

// ##### Sample Output 2:
//     Think of edge cases before submitting solutions
    

import java.util.*;
class removecharacter{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.nextLine();
        char b = sc.next().charAt(0);
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!=b){
                System.out.print(a.charAt(i));
            }
        }

    }
}