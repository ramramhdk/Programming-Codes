import java.util.Scanner;
class Ram
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in =new Scanner (System.in);
		int t =in.nextInt();
		while(t-->0)
		{
			//int l;
			
			String str ="";
			int N =in.nextInt();
			String s1=in.next();
			
			/*for(int i=0;i<N;i++)
			{
				s[i]=in.next().charAt();
			}*/
			//
			char[] s =s1.toCharArray();
			//first step:-
			
			if(N%2!=0)
			{
				for(int i=0;i<N-1;i++)
				{
					
					if(i%2==0)
					{
						char a =s[i];
						s[i]=s[i+1];
						s[i+1]=a;
					}
				}
			}
			else
			{
				for(int i=0;i<N;i++)
				{
					
					if(i%2==0)
					{
						char a =s[i];
						s[i]=s[i+1];
						s[i+1]=a;
					}
				}
			}
			//second step
			for(int i=0;i<N;i++)
			{
				
				int a =(int)s[i];
				int b =122-a+1;
				int c=97+b-1;
				str=str+(char)c;
				//System.out.print(str);
				
			}
			
				
				
				//printing
				System.out.println(str);
				//for(int i=0;i<N;i++)
				//{
				//	System.out.print(str[i]);
				//}
			
		}
		// your code goes here
	}
}