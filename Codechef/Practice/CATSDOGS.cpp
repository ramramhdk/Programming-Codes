#include<iostream>
using namespace std;
 
int main()
{	int t;
	long long c;
	long long l;
	long long d;
	long long min;
	long long max;
	cin>>t;
	cout<<endl;
	while(t-- > 0)
	{	cin>>c>>d>>l;
		cout<<endl;
			
		if(l%4 != 0)
			cout<<"no"<<endl;
		else 
		{	max = (c+d)*4;
			if((2*d - c) >= 0 )
				min = d*4;
			else 
				min = (c-d)*4 ;
			if(l>=min && l<=max)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
			 	
		}
	}
	return 0;
}	 