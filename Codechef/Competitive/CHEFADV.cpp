#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,m,x,y;
        cin>>n>>m>>x>>y;
        long long int a=0,b,sum1=0,sum2=0;
        if(sum1>0)
        {
        
        sum1=5;}
        if(n>1 && m>1)
        {
            if((n-1)%x==0 && (m-1)%y==0)
            a=10;
            if((n-2)%x==0 && (m-2)%y==0)
            a=10;
        }
        else
        {
              if((n-1)%x==0 && (m-1)%y==0)
            a=10;
        }
        
        if(a==10)
        cout<<"Chefirnemo\n";
        else
        cout<<"Pofik\n";
    }
    return 0;
}