/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
Scanner in= new Scanner(System.in);
int t=in.nextInt();
int min;
while (t-->0)
{
int n=in.nextInt();
int a[]=new int [n];
for(int i=0;i<n;i++)
{
a[i]=in.nextInt();
}
Arrays.sort(a);
min=a[1]-a[0];
//System.out.println(min);
for(int i=2;i<n;i++)
{
min=Math.min(min,a[i]-a[i-1]);
//System.out.println(min);
}
System.out.println(min);

}
		// your code goes here
	}
}