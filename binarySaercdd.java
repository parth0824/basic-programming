// Coding Problem
// Problem Name: Binary Search
// Problem Level: EASY
// Problem Description: 
// #### You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.

// ##### Input format : 
//     The first line contains an Integer 'N' which denotes the size of the array/list.

//     Second line contains 'N' single space separated integers representing the elements in the array/list.

//     Third line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow..

//     All the 't' lines henceforth, will take the value of X to be searched for in the array/list.

// ##### Output Format : 
//     For each test case, print the index at which X is present, -1 otherwise.

//     Output for every test case will be printed in a separate line.

// ##### Constraints :
//     1 <= t <= 10^4
//     0 <= N <= 10^6
//     0 <= X <= 10^9
//     Time Limit: 1 sec
//  ##### Sample Input 1:
//     7
//     1 3 7 9 11 12 45
//     1
//     3

// ##### Sample Output 1:
//     1

// ##### Sample Input 2:
    // 7
    // 1 2 3 4 5 6 7
    // 2
    // 9
    // 7

// ##### Sample Output 2:
//     -1
//     6
import java.util.*;
class binarySaercdd{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<b.length;i++) b[i] = sc.nextInt();
        int c = sc.nextInt();
        while(c>0){
            c--;
            int d =sc.nextInt();
            int s = 0 , e = b.length -1 ,m;
            int r = 0;
            while(s<=e){
                m=(e+s)/2;
                if(b[m]==d){
                    System.out.println(m);
                    r = 1;
                    break;
                }
                else if(b[m]>d){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            if(r==0){
                System.out.println(-1);
            }
        }
    }
}