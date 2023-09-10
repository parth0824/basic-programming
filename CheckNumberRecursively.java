// Coding Problem
// Problem Name: Check number recursively
// Problem Level: EASY
// Problem Description: ####Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// ####Do this recursively. 

// #####Input Format :
//     Line 1 : An Integer N i.e. size of array
//     Line 2 : N integers which are elements of the array, separated by spaces
//     Line 3 : Integer x

// #####Output Format :
//     'true' or 'false'

// #####Constraints :
//     1 <= N <= 10^3

//  #####Sample Input 1 : 
//     3
//     9 8 10
//     8

// ##### Sample Output 1 :
//     true

// ##### Sample Input 2 : 
//     3
//     9 8 10
//     2

// ##### Sample Output 2 :
//     false

import java.util.*;
class CheckNumberRecursively{
    public static boolean checknumberrecursively(int a,int b[],int c){
        if(a==b.length){
            return false;
        }
        if(b[a] == c){
            return true;
        }
        a++;
        return checknumberrecursively(a,b,c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b [] = new int [a];
        for(int i=0;i<b.length;i++)b[i] = sc.nextInt();
        int c = sc.nextInt();
        a=0;
        System.out.print(checknumberrecursively(a,b,c));
    }
}