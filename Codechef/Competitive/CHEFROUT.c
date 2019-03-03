#include <stdio.h>
 
int main(void) {
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
	 char arr[100050];
	 long long int i;
	 scanf("%s",arr);
	 int k;
	 if(arr[0]=='C')
	 k=0;
	 if(arr[0]=='E')
	 k=1;
	 if(arr[0]=='S')
	 k=2;
	 int temp,flag=0;
	 for(i=1;arr[i]!='\0';i++)
	 {
	 if(arr[i]=='C')
	  temp=0;
	 if(arr[i]=='E')
	  temp=1;
	 if(arr[i]=='S')
	  temp=2;
	  if(temp>=k)
	  k=temp;
	  else
	  {
	    printf("no\n");
	    flag=1;
	    break;
	  }
	 }
	 if(flag==0)
	 printf("yes\n");
    }
	return 0;
} 