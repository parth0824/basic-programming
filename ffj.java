import java.util.Scanner;
public class ffj {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int marks = sc.nextInt();
        if(marks >= 75)System.out.println("A");
        else if(marks < 75 && marks >= 65) System.out.println("B");
        else if(marks < 65 && marks >= 55) System.out.println("C");
        else if(marks < 65 && marks >= 55) System.out.println("C");
        else if(marks < 55 && marks >= 41) System.out.println("D");
        else if(marks <= 40) System.out.println("FAIL");        
    }
}