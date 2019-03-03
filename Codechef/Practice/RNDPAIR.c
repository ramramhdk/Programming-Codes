#include <stdio.h>
 
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],max=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        int c[1001]={0},m=0;
        for(int i=0;i<n;i++)
        {
            c[a[i]]++;
            
        }
        m=c[max];int l;
        if(m==n)
        {
            printf("1.00000000\n");
        }
        else if(m==1){
        for(int i=max-1;i>=0;i--)
        {
            if(c[i]>0)
            {
                l=c[i];
                break;
            }
        }
        double ans=(double)2.0*m*l/(n*(n-1));
        printf("%.8lf\n",ans);
        }
        else
        {
            double asn=(double) m*(m-1)/(n*(n-1));
            printf("%.8lf\n",asn);
        }
    }
	// your code goes here
	return 0;
}