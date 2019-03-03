/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int t= in.nextInt();
		while(t-->0)
		{
			
			int n=in.nextInt();
			int c=0;
			int s[]= new int [n];
			int j[]= new int [n];
			for(int i=0;i<n;i++)
			{
				s[i]=in.nextInt();
				j[i]=in.nextInt();
				
			}
			for(int i=0;i<n;i++)
			{
				if((j[i]-s[i])>5)
					c++;
				
			}
			System.out.println(c);
		}
		
		
		// your code goes here
	}
}