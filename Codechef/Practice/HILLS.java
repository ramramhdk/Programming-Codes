/* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in = new Scanner(System.in);
	    int t = in.nextInt();
	    while(t-->0)
	    {
	        int N,U,D;
	        N = in.nextInt();
	        U = in.nextInt();
	        D = in.nextInt();
	        int c=1;//by default value of our answer
	        int j=0;//parachute jump(only once)
	        int a[]= new int [N+1];
	        for(int i=1;i<=N;i++)
	        {
	            a[i]=in.nextInt();

	        }
	        for(int i=1;i<N;i++)//here we are not doing i<=N since at i==N:- a[i+1] is ArrayIndexOutOfBoundsException and
	        {                   //we only need to do comparison upto i=N-1,since at this value a[i]<a[i+1] will definitely works.(And that what we want).
	            if(a[i]<a[i+1])
	            {
	                if(a[i+1]-a[i]<=U)
	                {
	                    c++;
	                }
	                else
	                {
	                    break;
	                }

	            }
	            else if(a[i]>a[i+1])
	            {
	                if(a[i]-a[i+1]<=D)
	                {
	                    c++;
	                }
	                else if(j<1)
	                {
	                    j++;
	                    c++;
	                }
	                else
	                {
	                    break;
	                }

	            }
	            else//else if(a[i]==a[i+1])
	            {
	                c++;
	            }

	        }
	        System.out.println(c);
	    }

		// your code goes here
	}
}
