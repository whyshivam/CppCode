#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		long long int n;
		cin>>n;
		long long int num[n];
		string k[n];
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>num[i];
			sum+=num[i];
		}
		if(sum%n!=0)
		{
			k[j]="Impossible";
		}
		else
		{
			sum=sum/n;
		}
		bool fl=false;
		for(long long int i=0;i<n;i++)
		{
			if(num[i]==sum)
			{
				fl=true;
				cout<<num[i]<<endl;
				break;
			}
		}
		if(fl==false)
		{
			cout<<"Impossible"<<endl;
		}
	}
}
