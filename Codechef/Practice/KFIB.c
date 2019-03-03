#include <stdio.h>
 
int main(void) {
    int k,n,j=0,s=0;
    scanf("%d %d",&n,&k);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        a[i]=0;
        
    }
    a[0]=0;
    if(n<=k)
    {
        printf("1\n");
        
    }
    else
    {
        for(int i=1;i<n+1;i++)
        {
            if(i<=k)
            {
                
                a[i]=1;
                s+=a[i];
                
            }
            if(i>k){
               
                s=(s-a[i-k-1])%1000000007;
                a[i]=s%1000000007;
                s=(s+a[i])%1000000007;
               
            }
        }
        printf("%d\n",a[n]);
    }
	// your code goes here
	return 0;
}
 
  