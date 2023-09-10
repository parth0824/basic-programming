// import java.util.*;
// class recursion10{
//     public static void main(String args[]){
//         Scanner sc = new Scanner (System.in);
//         int a = sc.nextInt();
//         int b [] = new int[a];
//         for(int i=0;i<a;i++){
//             b[i]=sc.nextInt();
//         }int i=0;
//         checkSortArray(b,i);
//         int t = b.length;
//     }
//     public static void checkSortArray(int b[],int i){
//         if(i==b.length-2){
//             if(b[i]>=b[i+1]){
//                 System.out.print("no");
//                 return ;
//             }
//             System.out.print("yes");
//             return ;
//         }
//         if(b[i]>=b[i+1]){
//             System.out.print("no");
//             return ;
//         }
//         checkSortArray(b,i+1);
//     }
// }
