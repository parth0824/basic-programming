
import java.util.*;
public class h {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < arr.length; i++) {
                arr[i] = sc.nextInt();
            }
            int t = sc.nextInt();
            System.out.println("\n"+printSubSet(arr, 0, "", 0, t));

        }
        public static int printSubSet(int[] arr, int i, String ans, int sum, int target) {
            if (i == arr.length) {
                if (sum == target) {
                    System.out.print(ans);
                    return 1;

                }
                return 0;
            }

            int fs=	printSubSet(arr, i + 1, ans + arr[i] + " ", sum + arr[i], target);
            int ss=	printSubSet(arr, i + 1, ans, sum, target);
            return fs+ss;
        }
    }
    // 1 2 3   1 5   2 4   3 3    4 2   6 
    // 1 2 3   1 5   2 4   6 

