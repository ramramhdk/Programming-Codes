#include<bits/stdc++.h>
using namespace std;
long long func(long long n)
{
    long long temp,count=0;
    while(n>0)
    {
        temp=n%10;
        if(temp==3)
            count++;
         n=n/10;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n,n1=0,i;
       cin>>n;
       for(i=n+1;i<2*10000000009;i++)
       {
           n1=func(i);
           if(n1>=3)
                break;
       }
       cout<<i<<"\n";
    }
    return 0;
}