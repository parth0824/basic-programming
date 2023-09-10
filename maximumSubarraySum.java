// Assignment Coding Problem
// Problem Name: maximumSubarraySum
// Problem Level: MEDIUM
// Problem Description: #### Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

// #### For example, given the array [34, -50, 42, 14, -5, 86], the maximum sum would be 137, since we would take elements 42, 14, -5, and 86.

// #### Given the array [-5, -1, -8, -9], the maximum sum would be -1.

// #### Follow up: Do this in O(N) time.

// ##### Input Format:
// #### The first line of input contains size of array, which is denoted by N and second line of input contains N space separated integers.

// ##### Output Format:
// #### The first and only line of output should print the maximum subarray sum, as described in the description.

import java.util.*;
public  class maximumSubarraySum{
    public static int maxsubarraY(int b[]){
        int sum = 0;int m = b[0];
        for(int i=0;i<b.length;i++){
            if((sum+b[i])>0){
                sum = sum + b[i];
                m = Math.max(m,sum);
            }
            else  sum = 0;
        }
    return m;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        System.out.print(maxsubarraY(b));
    }
}
