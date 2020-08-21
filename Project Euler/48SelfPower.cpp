#include<iostream>
using namespace std;
long long int funn(long long int n)
{
	long long int h=n;
	long long int m=10000000000;
	for(int i=1;i<n;i++)
	{
		if(h%10==0)
		{
			h=0;
			break;
		}	
		h=h*n;
		
			h=h%m;
		
	}
	return h;
}
int main()
{
	long long int sum=0;
	long long int m=10000000000;
	for (int i=1;i<1000;i++)
	{
		sum+=funn(i);
		sum=sum%m;
	//	cout<<i<<"\t"<<sum<<endl;
	}
	cout<<sum<<endl;	
}
