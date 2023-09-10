// Assignment Coding Problem
// Problem Name: Sum of digits (recursive)
// Problem Level: MEDIUM
// Problem Description: #### Write a recursive function that returns the sum of the digits of a given integer.

// ##### Input format :
//     Integer N
// ##### Output format :
//     Sum of digits of N
// ##### Constraints :
//     0 <= N <= 10^9
//  ##### Sample Input 1 :
//     12345

// ##### Sample Output 1 :
//     15

// ##### Sample Input 2 :
//     9

// ##### Sample Output 2 :
//     9
import java.util.*;
public class sum_Of_Digits_Recursive{
    public static int xum_Of_Digits_Recursive(String a,int b,int sum){
        if(b==a.length()){
            return sum;
        }
        int temp = (int)a.charAt(b) - 48;
        sum = sum + temp ;
        b++;
        return xum_Of_Digits_Recursive(a,b,sum);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        int sum = 0;sc.close();
        System.out.println(xum_Of_Digits_Recursive(a,0,sum));
    }
}