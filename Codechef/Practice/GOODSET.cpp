#include<iostream>
 
using namespace std;
 
int main()
{	int t;
	int n;
	int i;
	cin>>t;
	cout<<endl;
	while(t-- > 0)
	{	cin>>n;
		cout<<endl;
		for(i=500;n>=1;n--,i--)
			cout<<i<<" ";
	}
	return 0;	
} 