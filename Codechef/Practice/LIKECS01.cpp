#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag,i;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;flag=0;
		int b[26];
		memset(b,0,sizeof(b));
		for(i=0;i<s.size();i++)
		{
			b[s[i]-97]++;
			if(b[s[i]-97]>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}		
 