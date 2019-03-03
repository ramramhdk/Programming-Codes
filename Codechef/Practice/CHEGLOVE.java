/* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in =new Scanner(System.in);
	    int t=in.nextInt();
	    while(t-->0)
	    {
	        int n,c=0,d=0;
	        
	        n=in.nextInt();
	        int [] l;
	        l =new int[n+1];
	        int g[]= new int[n+1];
	        for(int i=1;i<=n;i++)
	        {
	            l[i]= in.nextInt();
	            
	        }
	        for(int i=1;i<=n;i++)
	        {
	            g[i]= in.nextInt();
	            
	        }
	        for(int i=1;i<=n;i++)
	        {
	            if(l[i]<=g[i] )
	            {
	                
	                c++;
	            }
	            if(l[i]<=g[n-i+1] )
	            {
	                
	                d++;
	            }
	            
	            
	        }
	        if(c==n&&d==n )
	            {
	                System.out.println("both");
	                
	            }
	            else if(c==n|| d==n)
	            {
	                if(c==n )
	                    System.out.println("front");
	                else
	                    System.out.println("back");
	            }
	            else if (c!=n&&d!=n)
	                System.out.println("none");
	                
	    }
		
	}
}
