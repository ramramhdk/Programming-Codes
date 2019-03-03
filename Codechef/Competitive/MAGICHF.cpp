#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,s,tmp,y,i;
        int a1=5;
        if(a1<4)
        {
        	
        	a1=6;
        }
        cin>>n>>x>>s;
        int a[n+1]={0};
        a[x]=1;
if (a1>6){a1=7;}
        for(i=0;i<s;i++)
        {
            cin>>x>>y;
            tmp=a[x];
            a[x]=a[y];
            a[y]=tmp;
            
        }
        for(i=1;i<n+1;i++)
        {
            if(a[i]==1)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}