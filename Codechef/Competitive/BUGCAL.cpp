#include<bits/stdc++.h>
using namespace std;
int main()
{
	int qw;
	cin>>qw;
	while(qw--)
	{
		long long int a,b,add=0,i=0;
		cin>>a>>b;
		while(a||b)
		{
			add=add+((a+b)%10)*pow(10,i);
			a=a/10;
			b=b/10;
			i++;
		}
		cout<<add<<endl;
	}
	return 0;
}