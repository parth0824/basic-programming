// Assignment Coding Problem
// Problem Name: Three Teams
// Problem Level: MEDIUM
// Problem Description: 
// #### 1. There are N players, linearly standing. Each player has a chest number. The number also denotes the strength of that player. So, greater the number, stronger the player.
// #### 2.  You have to form 3 teams from these N players. Each team has to be of k size.
// #### 3. There are two restrictions in selections of players. First, a particular player can only be selected for one team. So, two teams cannot have the same player. Second, you can only select consecutively standing players for a particular team
// #### 4. Can you tell us the maximum possible cumulative sum of selected players chest number, if the selection is done according to the above mentioned conditions.

// ##### Input Format:
//     The first line of input contains the value of N.
//     The following line contains N space separated integers, that denotes the value of players chest number. The following line contains the value of k. Input would be provided in such a way that selection of 3 teams will always be possible.

// ##### Constraints:
//     Time Limit: 1 second
//     The value of N lies in the range: [1, 10000]
//     The value of N space separated integers lies in the range: [1, 65535]. The values can be duplicate. As value denotes chest number and chest number denotes strength and since, two players can have similar strength, hence, there can be duplicate values in the array.
//     The value of k lies in the range: [1, 1000].

// ##### Output  Format:
//     The first and only line of output contains the maximum sum, as described in the task.
//  ##### Sample Input 1:
//     8
//     1 2 1 2 6 7 5 1
//     2
// ##### Sample Output 1:
//     23
// ##### Explanation:
//     For selections, following 3 teams will have maximum sum: [1,2], [2, 6], [7, 5]


import java.util.*;
public class threeTerms{
    public static int call(int b[],int c){
        
    }
public static void main(String args[]){
    Scanner sc = new Scanner (System.in);
    int a = sc.nextInt();
    int b[] = new int [a];
    for(int i=0;i<b.length;i++){
        b[i] = sc.nextInt();
    }
    int c = sc.nextInt();
    System.out.print(call(b,c));
    }
}