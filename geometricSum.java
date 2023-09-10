// Assignment Coding Problem
// Problem Name: Geometric Sum
// Problem Level: MEDIUM
// Problem Description: #### Given k, find the geometric sum i.e. 
//     1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// #### using recursion.

// ##### Input format :
//     Integer k

// ##### Output format :
//     Geometric sum

// ##### Constraints :
//     0 <= k <= 1000
//  ##### Sample Input 1 :
//     3

// ##### Sample Output 1 :
//     1.875

// ##### Sample Input 2 :
//     4

// ##### Sample Output 2 :
//     1.9375
import java.util.*;
class geometricSum{
    public static double su(int a,double sum){
        if(a==0){
            return sum + 1;
        }
        double b = 0.5f;
        for(int i=0;i<a-1;i++){

            b = b * (0.5f);

        }

        sum = sum + b;
        a--;
        return su(a,sum);

    }
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int  a = sc.nextInt();
        double sum = 0;
        System.out.print(su(a,sum));
    }
}