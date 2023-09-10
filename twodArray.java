// ....................................input 2d array and printing it................................
// import java.util.*;
// class twodArray {
//     public static void main(String[] args) {
//         System.out.print("Enter the number of rows:");
//         Scanner sc = new Scanner (System.in);
//         int row = sc.nextInt();
//         System.out.print("Enter the number of column:");
//         int column = sc.nextInt();
//         int twod [][] = new int [row][column];

//         for(int i=0;i<row;i++){
//             for(int j=0;j<column;j++){
//                 twod[i][j] = sc.nextInt();
//             }
//         }
        // System.out.println("TwoD array----->");
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<column;j++){
        //         System.out.print(twod[i][j]+"  ");
        //     }System.out.println();
        // } 
//     }    
// }
///////////////////////////////////// max sum of column in 2d array (below program not above program)............................
// import java.util.*;
// class twodArray{
//     public static void main(String[] args){
//         int u;int v;
//         System.out.print("Enter the number of rows:");
//         Scanner sc = new Scanner (System.in);
//         int row = sc.nextInt();
//         System.out.print("Enter the number of column:");
//         int column = sc.nextInt();
//         int twod [][] = new int [row][column];
//         int sum = 0;
//         int s = Integer.MIN_VALUE;
    
//         for(int i=0;i<row;i++){
//             for(int j=0;j<column;j++){
//                 twod[i][j] = sc.nextInt();
//                 sum = sum + twod[i][j];
//                 u=i;
//             }
//             if(sum>s){
//                 u=i;
//                 s=sum;
//             }v=u;
//             sum=0;
//         }
//         System.out.print("The largest sum column is "+ u +" and the sum is "+s);
//         System.out.println("\nTwoD array----->");
//         for(int i=0;i<row;i++){
//             for(int j=0;j<column;j++){
//                 System.out.print(twod[i][j]+"  ");
//             }System.out.println();
//         } 
//         sc.close();
//     }
// }
