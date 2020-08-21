#include<iostream>
using namespace std;
int countDiv(long long int p)
{
	int count=0;
	for(long long int i=1;i*i<=p;i++)
	{
		if(p%i==0)
		{count++;
		}
	}
	return (count*2);
}
int main()
{	
	int n;
	for( n=1;;n++)
	{
		long long int k=n*(n+1)/2;
		cout<<k<<"\t";
		if(countDiv(k)>=500)
		{
			break;
		 } 
	}
	cout<<n;
	
}
