import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in =new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0)
		{
			int n,k;
			n=in.nextInt();
			k=in.nextInt();
			//int l=(int)n;
			int a[]= new int[n];
			for(int i=0;i<n;i++)
				a[i]=in.nextInt();
			int v=0;
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
					v=Math.abs(v+a[i]);
				else
					v=Math.abs(v-a[i]);
				
			}	
			if(v>=k)
				System.out.println("1");
			else
				System.out.println("2");
			
		}
		
		// your code goes here
	}
} 