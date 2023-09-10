// Assignment Coding Problem
// Problem Name: String to Integer
// Problem Level: MEDIUM
// Problem Description: #### Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

// ##### Input format : 
//     Numeric string S (string, Eg. "1234")

// ##### Output format : 
//     Corresponding integer N (int, Eg. 1234)

// ##### Constraints :
//     0 <= |S| <= 9
//     where |S| represents length of string S.
//  ##### Sample Input 1 :
//     1231

// ##### Sample Output 1 :
//     1231

// ##### Sample Input 2 :
//     12567

// ##### Sample Output 2 :
//     12567

import java.util.*;
class stringToInteger{
    public static int calll(String a,int b,int f){
        if(b==a.length()){
            return f;
        }
        int temp = (a.charAt(b) -48) * (int)(Math.pow(10,a.length()-1-b));
        b++;
        f = f + temp;
        return calll(a,b,f);
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a =  sc.next();
        int myAnswer=0;
        System.out.print(calll(a,0,myAnswer));
        sc.close();
    }
}