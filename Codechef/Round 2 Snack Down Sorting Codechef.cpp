#include <iostream>
using namespace  std;
int main()
{
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int n;
		cin>>n;
		long int a[n];
		long int k=0; long int index;
		bool count=1;
		for(long int q=0;q<n;q++)
		{
			cin>>a[q];
			if(q>0)
			{	
				if(a[q]>k)
				{
					k=a[q];
					index=q;
				}
			}
		}
		long int b[n];
		long int j=0;
		for(long int qw=index+1 ;qw<n;j++,qw++)
		{
			b[j]=a[qw];
		}
		for(long int qw=0;qw<=index;qw++,j++)
		{
			b[j]=a[qw];
		}
		for(long int jk=0;jk<n-1;jk++)
		{
			if(b[jk]>b[jk+1])
			{
				count=0;
				break;
			}
		}
		if(count==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
