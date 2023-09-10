// Coding Problem
// Problem Name: Bubble Sort
// Problem Level: EASY
// Problem Description: 
// #### Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.


// ##### Note:
//     Change in the input array/list itself. You don't need to return or print the elements.


// ##### Input format : 
//     The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

//     First line of each test case or query contains an integer 'N' representing the size of the array/list.

//     Second line contains 'N' single space separated integers representing the elements in the array/list.

// ##### Output format :
//     For each test case, print the elements of the array/list in sorted order separated by a single space.

//     Output for every test case will be printed in a separate line.

// ##### Constraints :
//     1 <= t <= 10^2
//     0 <= N <= 10^3
//     Time Limit: 1 sec
//  ##### Sample Input 1:
//     1
//     7
//     2 13 4 1 3 6 28

// ##### Sample Output 1:
//     1 2 3 4 6 13 28

// ##### Sample Input 2:
//     2
//     5
//     9 3 6 2 0      
//     4
//     4 3 2 1

// ##### Sample Output 2:
//     0 2 3 6 9
//     1 2 3 4
import java.util.*;
class bubbleSort1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        while(t>0){
            t--
            ;
            int a = sc.nextInt();
            int b [] = new int [a];
            for(int i=0;i<b.length;i++)b[i]=sc.nextInt();
            for(int i=0;i<b.length-1;i++){
                for(int j=0;j<b.length-1-i;j++){
                    if(b[j]>b[j+1]){
                        int temp = b[j];
                        b[j] = b[j+1];
                        b[j+1] = temp;
                    }
                }
            }for(int i=0;i<b.length;i++)System.out.print(b[i]+"  ");

        }
    }
}