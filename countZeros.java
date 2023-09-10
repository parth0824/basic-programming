// Assignment Coding Problem
// Problem Name: Count Zeros
// Problem Level: MEDIUM
// Problem Description: #### Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

// ##### Input Format :
//     Integer N

// ##### Output Format :
//     Number of zeros in N

// ##### Constraints :Count Zeros
//     0 <= N <= 10^9
//  ##### Sample Input 1 :
//     10204

// ##### Sample Output 1 :
//     2

// ##### Sample Input 2 :
//     708000

// ##### Sample Output 2 :
//     4
import java.util.*;
public class countZeros{
    public static int ountZeros(String a,int b,int sum){
        if(b==a.length()){
        return sum;
        }
        if(a.charAt(b)=='0'){
            sum = sum +1 ;
        }
        b++;
        return  ountZeros(a,b,sum);
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner (System.in);

        
        String a = sc.next();
        int c =0;
        System.out.print(ountZeros(a,0,c));


        
        
        


    }
}