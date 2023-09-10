import java.util.*;
class q5{
    public static void main(String args[]){
        Scanner sc  = new Scanner (System.in);
        int a = sc.nextInt();
        eligibleToVoteOrNot(a);
    }
    public static void eligibleToVoteOrNot(int a){
        if(a>18)
            System.out.print("Eligible To Vote");
        else{
            System.out.print("Not Eligible To Vote");
        }
    }
}