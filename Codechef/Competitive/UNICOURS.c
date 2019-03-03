#include <stdio.h>
 
 
int main() 
{
    int t;
    scanf("%d",&t);
    long long int n,i;
    while(t--)
    {
        scanf("%lld",&n);
        long long int a;
         long long int  max=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(a>max)
            {
                max=a;
            }
        }
        long long int p=n-max;
        printf("%lld\n",p);
    }
	return 0;
}