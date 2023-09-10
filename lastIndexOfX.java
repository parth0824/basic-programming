// Coding Problem
// Problem Name: Last index of x
// Problem Level: MEDIUM
// Problem Description: ####Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// ####Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// ####You should start traversing your array from 0, not from (N - 1).
// ####Do this recursively. Indexing in the array starts from 0.

// #####Input Format :
//     Line 1 : An Integer N i.e. size of array
//     Line 2 : N integers which are elements of the array, separated by spaces
//     Line 3 : Integer x

// #####Output Format :
//     last index or -1

// #####Constraints :
// ####1 <= N <= 10^3

//  #####Sample Input : 
//     4
//     9 8 10 8
//     8

// #####Sample Output :
//     3
import java.util.*;
class lastIndexOfX{
    private static int lastIndexOfX_(int a,int b[],int c){
        if(a<0){
            return -1;
        }
        if(b[a]==c){
            return a;
        }
        return lastIndexOfX_(a+1,b,c);

    }
    public static int lastIndexOfX_(int b[],int c){
        return lastIndexOfX_(b.length-1,b,c);
    }
    public static void main(String[] args) {
        Scanner  sc = new Scanner (System.in);
        int a =sc.nextInt();
        int b [] = new  int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        int c = sc.nextInt();
        System.out.print(lastIndexOfX_(b,c));
        sc.close();
    }
}