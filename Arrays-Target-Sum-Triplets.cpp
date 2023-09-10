import java.util.*;
public
class Main
{
public
    static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++)
        arr[i] = sc.nextInt();
        int mid = 0;
        int lo = 0;
        int hi = arr.length - 1;
        while (mid <= hi){
            if (arr[mid] == 2){
                int temp = arr[hi];
                arr[hi] = arr[mid];
                arr[mid] = temp;
                hi--;
            }
            else if (arr[mid] == 1)mid++;
            else{
                int temp = arr[lo];
                arr[lo] = arr[mid];
                arr[mid] = temp;
                lo++;
                mid++;
            }
        }
        for (int i = 0; i < arr.length; i++) System.out.print(arr[i] + " ");
    }
}
