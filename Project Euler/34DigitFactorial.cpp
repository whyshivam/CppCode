#include<iostream>
using namespace std;
bool revfac(long long int n)
{
	long long int fac[10]={0,1,2,6,24,120,720,5040,40320,362880};
	long long int h=n;
	long long int sum=0;
	bool flag=true;
	while(h>0)
	{
		int r=h%10;
		sum+=fac[r];
		if(sum>n)
		{
			break;
		}
		h/=10;
	}
	if(sum!=n)
	{
		flag=false;
	}
	return flag;
}
int main()
{
	int c=0;
	for(long long int i=3;i<9999999;i++)
	{
		if(revfac(i))
		{
			c++;
			
			cout<<c<<"\t"<<i<<endl;
		}
		
		
	}
}
