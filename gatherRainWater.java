// Assignment Coding Problem
// Problem Name: Gather Rain Water
// Problem Level: MEDIUM
// Problem Description: #### Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
// #### Please refer to Sample test case for more details.
// ##### Input format:
//     The first line of input contains size of the array, n.
//     The following line of input contains n space separated integers.

// ##### Output format:
//     The first and only line of output contains integer, in accordance to the task.

// ##### Constraints:
//     1 <= n <= 10000



//  ##### Sample Input 1:
//     6
//     3 0 0 2 0 4

// ##### Sample Output 1:
//     10

// ##### Sample Input 2 :
//     5
//     90 70 20 80 50


// ##### Sample Output 2 :
//     70

// ##### Explanation for Sample Input 1 :
//     Refer to the image for better comprehension:
// ![Alt Text](https://ninjasfiles.s3.amazonaws.com/0000000000001829.png)

import java.util.*;
class gatherRainWater{
    public static int totalWater(int a[],int sum){

        for(int i=1;i<a.length-1;i++){
            if(a[i]>a[i+1] && a[i]<a[i-1]){

            }
        }
        
        
        
        
        return 0;
    }    
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b [] = new int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();

        System.out.print(totalWater(b,0));
    }
}