#include <stdio.h>
 
int main(void) {
    long long int sx,sy,t,n,i,a;
    scanf("%lld",&t);
	while(t--)
	{
	    sx=sy=0;
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a);
	        if(i%2==0)
	            sx=sx+a;
	        else
	            sy=sy+a;
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a);
	      if(i%2==0)
	      sy=sy+a;
	      else
	      sx=sx+a;
	    }
	    if(sy>sx)
	    printf("%lld\n",sx);
	    else
	    printf("%lld\n",sy);
	 }
	return 0;
}