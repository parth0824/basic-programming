// Assignment Coding Problem
// Problem Name: Chocolate Carton Distribution Problem
// Problem Level: MEDIUM

// Problem Description: #### Anuj is one of the finest instructors at Coding Ninjas. He takes a batch of m students. He has been given n number of chocolate cartons. Each carton can have a variable number of chocolates. He has been given a task to distribute the chocolates to his students on the occasion of Holi. Now, here is the tricky part, he needs to distribute the chocolates in such a way that:
// 1. Each student gets one carton of chocolate.

// 2. The difference between the chocolate carton with the maximum number of chocolates and the carton with the minimum number of chocolates given to the students is minimum.

// ##### Input format:  m=no of students    n=no chocolate carton
//     The first line of input contains number of chocolate cartons, n. The following line contains n space separated integers. The following line of input contains number of children to whom those n carton are to be distributed, m.

// ##### Output format:
// The first and only line of output contains the minimum difference possible between the student with maximum number of chocolates and the one with the minimum number of chocolates.

// ##### Constraints :
//     1 <= n <= 100
//     1 <= m <= n
//  ##### Sample Input 1 :
// 7
// 7 3 2 4 9 12 56
// 3
// ##### Sample Output 1 :
//     2
// ##### Sample Input 2 :
// 6
// 1 2 3 4 78 80
// 3
// ##### Sample Output 2 :
//     2

import  java.util.*;
public class chocolateCartonDistributionProblem{
    public static int chocolate(int a[],int m){
        int min = Integer.MAX_VALUE;
        Arrays.sort(a);
        for(int i=0;i<a.length - m + 1 ;i++){
            if(min>a[i+2]-a[i]){
                min  = a[i+2]-a[i];
            }
        }
        return min;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a[] = new int [n];
        for(int i=0;i<a.length;i++) a[i] = sc.nextInt();
        int m = sc.nextInt();
        System.out.print(chocolate(a,m));
        sc.close();
    }
}