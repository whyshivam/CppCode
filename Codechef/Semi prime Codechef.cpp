#include<iostream>
using namespace std;
int main()
{
	int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	bool pro[10000];
	for(int i=0;i<(10000);i++)
	{
		pro[i]=false;
	}
	for(int j=1;j<25;j++)
	{
		for(int k=0;k<j;k++)
		{
			int l=prime[j]*prime[k];
			pro[l]=1;
		}
	}
	int t; 
	cin>>t;
	for(;;)
	{
		if(t>=0&&t<=200)
		{break;
		}
		else cin>>t;
	}
	
	for(int q=1;q<=t;q++)
	{
		int n;
		cin>>n;
		for(;;)
		{
		if(n>=0&&n<=200)
		{	
			break;
		}
		else cin>>n;
		}
		int p=0;
		for(int i=6;i<=200;i++)
		{
			if(pro[i]==true)
			{ int z=n-i;
				if(pro[z]==true&&(z>=0))
				{	
					p=1;
					cout<<"YES"<<endl;break;
				}
			}
		}
		if(p==0)
		cout<<"NO"<<endl;
	}

}
