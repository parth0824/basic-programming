// // // import java.util.*;
// // // class recursion{
// // //     public static void main(String args[]){
// // //          Scanner sc = new Scanner (System.in);
// // //          int a = sc.nextInt();
// // //          call(a);
// // //     }
// // //     public static void call(int a){
// // //         if(a<10){
// // //             System.out.print(a);
// // //             return ;
// // //         }
// // //         int b = a%10;
// // //         int c = a/10;
// // //         System.out.print(b);
// // //         b = c;
// // //         call(b);
// // //     }
// // // }
// // import java.util.*;
// // class recursion{
// //     public static void main(String[] args) {
// //         Scanner sc = new Scanner(System.in);
// //         int a = sc.nextInt();int b=0;
// //         call(a,b);
// //     }
// //     public static void  call(int a,int b){
// //         if(a<10){
// //             if(a==0)b++;
// //             System.out.print(b);
// //             return ;
// //         }
// //         int c = a%10;
// //         if(c==0){
// //             b++;
// //         }
// //         a = a / 10;
// //         call(a,b);
// //     }
// // }
// import java.util.*;
// class recursion{
//     static ArrayList<Integer> s = new ArrayList<>();
//     public static void main (String ags[]){
//         int a []={1,2,3,4,5,6,2,7,2,8,9,2,0};
//         int b=2;
//         int c = 0;
//         call(a,b,c);
//     }
//     public static void call(int a[],int b,int c){
//         if(c==a.length-1){
//             // System.out.print(s);
//             System.out.print("not found!!");
//             return ;
//         }
//         if(a[c]==b){
//             s.add(c);
//             System.out.print(c);
//             return ;
//         }
//         c++;
//         call(a,b,c);
//     }
// }
// import java.util.*;
// class recursion{
//     public static void main (String  atk[]){
//         String a = "axxxxxxxxxxxxxxxxxxbbbbbbbxcbcfxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxbbbbb bbatbaa";
//         call(a,0);
//     }
//     public static void call(String a,int b) {
//         if(b==a.length()){
//             return;
//         }
//         if(a.charAt(b)!='b'){
//             System.out.print(a.charAt(b));
//         }
//         int d [] = new int [6];
//         call(a,++b);
//     }
// }