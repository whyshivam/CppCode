#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int qw=1;qw<=t;qw++)
	{
		int n;
		cin>>n;
		int people[n+1];
		int sum[n+1];
		sum[0]=0;
		people[0]=0;
		for(int i=1;i<=n;i++)
		{
			cin>>people[i];
			sum[i]=sum[i-1]+people[i];
			
		}
		for(int o=0;o<=n;o++)
		{
			cout<<sum[o]<<endl;
		}
		int l=1;
		int t=1;
		for( l;l<=n;l++)
		{
			int k=sum[t];
			if(k<n)
			t+=sum[k];
			else 
			break;
		}
		cout<<l;
	}
}
