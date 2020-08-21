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
		int sum1[n+1];
		//int sum2[n+1];
		//sum2[0]=0;
		sum1[0]=0;
		people[0]=0;
		for(int i=1;i<=n;i++)
		{
			cin>>people[i];
			sum1[i]=sum1[i-1]+people[i];
			//sum2[i]=sum2[i-1]+sum1[i];
			
		}
	
		int l=1,po=0;
		int theyknow=1;
		for( l=1;l<=n;l++)
		{po++;
			if(sum1[l]>=n)
			break;
			theyknow+=sum1[l];
			if(theyknow>=n)
			break;
			l=theyknow;
		}
		cout<<po<<endl;
	}
}
