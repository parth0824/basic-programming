// Assignment Coding Problem
// Problem Name: Warm Reception
// Problem Level: MEDIUM
// Problem Description: #### There is only one beauty parlour in the town CodingNinjasLand. The receptionist at the beauty parlor is flooded with appointment requests because the festival is round the corner and everyone wants to look good on it. 
// #### She needs your help. The problem is they don’t have chairs in reception. They are ordering chairs from NinjasKart. They don’t want to order more than required. You have to tell the minimum number of chairs required such that none of the customers has to stand.

// ##### Input Format :
//     First line contains the number of customers that will come. Second line contains N space-separated integers which represent the arrival timings of the customer. Third line contains N space-separated integers which represent the departure timings of the customer. Arrival and departure timings are given in 24-hour clock.

// ##### Constraints:
//     1<= N <= 100
//     Arrival and departure timings lie in the range [0000 to 2359]
//     Time Limit: 1 second

// ##### Output Format :
//     You have to print the minimum number of chairs required such that no customer has to wait standing. 

//  #####Sample Test Cases:
// ####Sample Input 1 :
// 5
// 900 1000 1100 1030 1600
// 1900 1300 1130 1130 1800
// ####Sample Output 1:
//     4

// ####Explanation:
//     4 because at 1100 hours, we will have maximum number of customers at the shop, throughout the day. And that maximum number is 4. 

import java.util.*;
class warmReception{
    public static int Warm(int a[],int b[]){

        for(int i=0;i<a.length-1;i++){
            for(int j=i+1;j<a.length;j++){
                if(a[i]>a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        int count = 1;
        for(int i=1;i<a.length;i++){
            if(a[i]-b[i-1]<=0){
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a[] = new int [n];
        for(int i=0;i<a.length;i++){
            a[i] = sc.nextInt();
        }
        int b[] =new int [n];
        for(int i=0;i<b.length;i++){
            b[i] = sc.nextInt();
        }
        System.out.print(Warm(a,b));
        sc.close();
    }
}