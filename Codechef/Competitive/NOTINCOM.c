#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	 while(n--)
	{
		long long int a,d,i,j;
		scanf("%lld %lld",&a,&d);
		long long int k[a],b[d],c=0;
		for(i=0;i<a;i++)
		scanf("%lld",&k[i]);
		for(j=0;j<d;j++)
		scanf("%lld",&b[j]);
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				if(k[i]==b[j])
				c++;
			}
		}
	   printf("%lld\n",c);	
	}
	
	return 0;
	
	
	
}