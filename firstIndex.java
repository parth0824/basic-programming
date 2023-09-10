// Coding Problem
// Problem Name: First Index
// Problem Level: EASY
// Problem Description: ####Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// ####First index means, the index of first occurrence of x in the input array.
// ####Do this recursively. Indexing in the array starts from 0.

// #####Input Format :
//     Line 1 : An Integer N i.e. size of array
//     Line 2 : N integers which are elements of the array, separated by spaces
//     Line 3 : Integer x

// #####Output Format :
//     first index or -1

// #####Constraints :
// ####1 <= N <= 10^3

//  #####Sample Input : 
    // 4
    // 9 8 10 8
    // 8

// #####Sample Output :
//     1

import java.util.*;
class firstIndex{
    private static int firstIndex_(int a,int b[],int c){
        if(a==b.length){
            return -1;
        }
        if(b[a]==c){
            return a;
        }
        return firstIndex_(a+1, b, c);
    }
    public static int firstIndex_(int b[],int c){
        return firstIndex_(0,b,c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        int c =sc.nextInt();
        System.out.print(firstIndex_(b,c));
        sc.close();
    }
}