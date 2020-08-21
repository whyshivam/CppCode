/*Find the number of ways of selecting two numbers from a pool of first 10^6 
NaturalNumbers such that they are coprime*/
#include<iostream>
using namespace std;
bool prime(int n)
{
	bool k=1;
	for(int i=2;i*i<n;i++)
	{
		if (n%i==0)
		{
			k=0;
			break;
			}	
	}
	return k;
}
int main()
{
	int num[1000001];
	
	for(int i=0;i<1000001;i++)
	{
		num[i]=1;	
	}
	for(int i=2;i<1000001;i++)
	{
		if (num[i]==1)
		{
			
			for(int j=i;j<1000001;j+=i)
			{
				num[j]*=i;
			}
		}
	}
}
