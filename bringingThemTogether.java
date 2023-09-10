// Assignment Coding Problem
// Problem Name: Bringing them together
// Problem Level: MEDIUM
// Problem Description:
//  #### 1. Rohit was organizing a party. He made his friends stand linearly in a queue and gave a cap with number printed on its top to each of its friend.
// #### 2. He wanted to bring all the people whose cap number is less than or equal to 'X' together. But he wanted to achieve it in minimum transitions of his friends.
// #### 3. Given the initial position of friends with their cap numbers, can you tell us minimum number of transitions required to bring all the people whose cap number is less than or equal to 'X' together.

// ##### Input Format:
//     The first line contains the number of friends that came to the party. Let it be denoted by n.
//     The following line contains n space separated integers, that denotes the cap of his standing friends. The following line contains the value of X.

// ##### Constraints:
//     Time Limit: 1 second
//     The value of n lies in the range: [1, 10000]
//     The value of X lies in the range: [1, 1000]

// ##### Output Format:
//     The first and only line of output contains the value of minimum number of transitions, as described in the task.  
  
//  ##### Sample Input 1:
//     7
//     12 17 19 15 18 17 14
//     15
// ##### Sample Output 1:
//     2
// ##### Explanation:
//     There are three elements which are less than or equal to 'X'. Following are those three elements: 12, 14, 15.
//     The minimum number of transitions will be two. One of the many subarrays, where the minimum transitions will be two is first subarray of size 3, i.e. [12, 17, 19]. We can bring all elements together by swapping (17 & 15) and (19 & 14).

import java.util.*;
public class bringingThemTogether{
    public static int call(int a,int b[],int c){
        

    }

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b[] = new int [a];
        for(int i=0;i<b.length;i++){
            b[i] = sc.nextInt();
        }

        int c = sc.nextInt();

        System.out.print(call(a,b,c));




    }   
}