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
			String s= in.next();
			int count=0,days=0,max=0;
			char c[]= s.toCharArray();
			for(int i=0;i<s.length();i++)
			{
				if(c[i]=='.')
				{
					while(c[i]!='#')
					{
						count++;
						i++;
					}
					if (count>max)
					{
						max=count;
						days++;
					}
					count=0;
				}
			}
			System.out.println(days);
		}
		// your code goes here
	}
}