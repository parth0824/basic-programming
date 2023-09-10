// Coding Problem
// Problem Name: All indexes of x
// Problem Level: MEDIUM
// Problem Description: ####Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// ####Do this recursively. Indexing in the array starts from 0.

// #####Input Format :
//     Line 1 : An Integer N i.e. size of array
//     Line 2 : N integers which are elements of the array, separated by spaces
//     Line 3 : Integer x

// #####Output Format :
//     indexes where x is present in the array (separated by space)

// #####Constraints :
// ####1 <= N <= 10^3

//  #####Sample Input : 
//     5
//     9 8 10 8 8
//     8

// #####Sample Output :
//     1 3 4
import java.util.*;
public class allindexesOfX{
    public static void callMeBaby(int a,int b[],int c){
        if(a==b.length){
            return ;
        }
        if(b[a]==c){
            System.out.print(a+" ");
        }
        callMeBaby(a+1,b,c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a =sc.nextInt();
        int b [] = new int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        int c=sc.nextInt();
        callMeBaby(0,b,c);
    }
}