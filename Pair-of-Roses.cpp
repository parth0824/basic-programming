import java.util.*;
public class Main {
    public static void main(String args[])
	 {
		Scanner s = new  Scanner(System.in);
		int t = s.nextInt();
		while(t-->0)
		{
			int n = s.nextInt();
			int[] arr=new int[n];
			for(int  i=0 ; i<n ; i++)
			{
				arr[i] = s.nextInt();
			}
			int deepkm = s.nextInt();
			
					Arrays.sort(arr);
		int  r1=0, r2=0;
		int  min=Integer.MAX_VALUE,  c=0 , diff=0;
		for(int  i=0 ; i<arr.length; i++){
			

			for(int   j = i+1; j<arr.length; j++)
			 {
				if( arr[i]+arr[j] == dr){
					//f=1;
					 diff = Math.abs(arr[i]-arr[j]);
					 if(diff<min){
						 min = diff;
						 r1 = arr[i];
						 r2 = arr[j];
						 
					 }
					

				}
			}
			
		}
		System.out.println("Deepak should buy roses whose prices are "+r1+" and "+r2+".");
	
        
		}
    
	
	}
}