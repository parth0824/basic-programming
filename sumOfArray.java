// Coding Problem
// Problem Name: Sum of array (recursive)
// Problem Level: EASY
// Problem Description: #### Given an array of length N, you need to find and return the sum of all elements of the array.
// ####Do this recursively. 

// ##### Input Format :
//     Line 1 : An Integer N i.e. size of array
//     Line 2 : N integers which are elements of the array, separated by spaces

// ##### Output Format :
//     Sum

// ##### Constraints :
//     1 <= N <= 10^3

//  #####Sample Input 1 : 
//     3
//     9 8 9

// #####Sample Output 1 :
//     26

// #####Sample Input 2 : 
//     3
//     4 2 1

// #####Sample Output 2 :
//     7    
import java.util.*;
public class sumOfArray {
    public static int sum_of_array(int a,int b[],int sum){
        if(a==b.length){
            return sum;
        }
        sum = sum + b[a];
        a++;
        return sum_of_array(a,b,sum);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int[a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        a=0;int sum = 0;
        System.out.print(sum_of_array(a,b,sum));
    }
}
