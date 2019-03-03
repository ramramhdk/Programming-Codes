#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll m,n,o;
        cin>>m>>n>>o;
        o=2*o;
        m=m+n;
        if(m%o<=(o/2-1))
        cout<<"CHEF\n";
        else
        cout<<"COOK\n";
        /* done till here, from now onwards it's tempering*/
        int l=5,k=77;
        if(l>k)
        {
            l++;
            ++k;
            l=l+k;
        }
        if(l<k)
        {
            l--;
            --k;
            l+=k;
            
        }
    }
    return 0;
}