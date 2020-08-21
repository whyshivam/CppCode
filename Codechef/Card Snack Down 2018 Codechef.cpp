#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int n;
		cin>>n;
		long int a[2*n];
		long int max=0;
		long int maxi;
		bool say=1;
		for(long int qw=0;qw<n;qw++)
		{
			cin>>a[qw];
			a[n+qw]=a[qw];
			if(a[qw]>=max)
			{
				max=a[qw];
				maxi=qw;
			}
		}
		for(long int p=1;p<n-1;p++)
		{
			if(a[maxi+p]>a[maxi+p+1])
			{
				cout<<"NO"<<endl;
				say=0;
				break;
			}
		}
		if(say==1)
		cout<<"YES"<<endl;
	}
		
}
