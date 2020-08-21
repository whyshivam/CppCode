#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int qw=1;qw<=t;qw++)
	{
		int n;
		cin>>n;
		int people[n]={};
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>people[i];
		}
		int day=0; int po=0;
		
				for(int i=0;i<n;i++)
				{  po=sum;
					
					day++;
					int ko=0;
					for(int j=po-1;j<sum;j++)
					{
						ko+=people[j];
					}
					sum=sum*2+ko;
					
					if (sum>=n)
				{
					break;
				}
				
				}
				
				
		
		cout<<day;
	}
}
