#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
     {
         long long n,j,r,a=0,b=0,c=0;
         cin>>n;
         j=(n-1)/26;
         r=n-(26*j);
         //r=n-r;
         if(r>=0 && r<=2)
                  a=pow(2,j);
         if(r>=3 && r<=10)
                  b=pow(2,j);
         if(r>10)
                  c=pow(2,j);
                  cout<<a<<" "<<b<<" "<<c<<endl;

     }
     
     /*done till here, it's tempering starts from here*/
    int l=54,k=707;
    if(l>k)
    {
        l++;
        ++k;
        l=l-k;
    }
    if(l<k)
    {
        l--;
        ++k;
        l-=k;
        
    }
     return 0;
}