#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,flag=0;
		cin>>n;
		int a[n],val[7]={0};
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		for(int i=0;i<n/2+1;i++){
            if(a[i]==a[n-i-1]){
                if((a[i]==a[i-1])||(a[i]==(a[i-1]+1))||(i==0)){
                    val[a[i]-1]=1;
                }
                else{
                    flag=1;
                    break;
                }
            }
            else{
                flag=1;
                break;
            }
		}
		for(int i=0;i<7;i++){
            if(!val[i]){
                flag=1;
                break;
            }
		}
		if(!flag)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
	}
	return 0;
}
 