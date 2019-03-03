#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 int arr[100000+20];
 
 int find( int u){
	while(arr[u]!=u)
		u=arr[u];
	return arr[u];
}
 
void unionq( int u, int v)
{
 int one=find(u);
 int two=find(v);
 arr[two]=one;
}
int main() 
{
	int n,q;
	
	ios_base::sync_with_stdio(false);
	
	cin>>n>>q;
	for (int i=0;i<=n;i++)
	arr[i]=i;
	
	int g,u,v;

	for(int i=0;i<q;i++)
	{
		cin>>g>>u>>v;
		//scanf("%d %d %d",&g,&u,&v);
		if(!g)
		{
			unionq(u,v);
		}
		else
		{
			if(find(u)==find(v))
			{
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
	return 0;
} 