/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in =new Scanner(System.in);
		int a,b,c;
		a=in.nextInt();
		b=in.nextInt();
		c=in.nextInt();
		double D;
		D= b*b-4*a*c;
		//System.out.println(D);
		//System.out.println(Math.sqrt(D));
		double x1,x2;
		//System.out.println(Math.sqrt(D));
		//a1-b+ ;
		x1=(b*(-1)+Math.sqrt(D))/(a+a);
		x2= (b*(-1)-Math.sqrt(D))/(a+a);
		System.out.println(x1);
		System.out.println(x2);
		// your code goes here
	}
}