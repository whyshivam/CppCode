#include<iostream>
using namespace std;
int main()
{
	for(long long int i=100000;i<=999999/6;i++)
	{
		long long int h=i*6;
		long long int k1,k2;
		k1=h%1000;
		k2=h/1000;
		long long int j1=i%1000;
		long long j2=i/1000;
		if(j1==k2)
		{
			if(k1==j2)
			{
				cout<<i<<"\t"<<h<<endl;
				break;
			}
			
		}
	}
}
