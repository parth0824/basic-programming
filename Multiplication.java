// Assignment Coding Problem
// Problem Name: Multiplication (Recursive)
// Problem Level: MEDIUM
// Problem Description: #### Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

// ##### Input format :
//     Line 1 : Integer M
//     Line 2 : Integer N

// ##### Output format :
//     M x N

// ##### Constraints :
//     0 <= M <= 1000
//     0 <= N <= 1000
//  ##### Sample Input 1 : 
//     3 
//     5

// ##### Sample Output 1 :
//     15

// ##### Sample Input 2 : 
//     4 
//     0

// ##### Sample Output 2 :
//     0
import java.util.*;
class Multiplication{
    public static int Multiplication_(int a,int b,int c){
        if(a==0) return c;
        return Multiplication_(a-1,b,c+b);
    }    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();int b=sc.nextInt();
        System.out.print(Multiplication_(a,b,0));
    }
}