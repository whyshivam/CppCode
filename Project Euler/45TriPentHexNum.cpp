#include<iostream>
#include<math.h>
using namespace std;
bool trichk(unsigned long long int n)
{
	double h=n+0.00000000;
	h*=2.0000;
	h=pow(h,0.5);
	long long int k=h;
	if((k*(k+1)/2)==n)
	{
		return true;
	}
	else
	return false;
}
bool pentchk(long long int n)
{
	double h=n+0.0;
	h*=2.0/3.0;
	h=pow(h,0.5);
	long long int k=h+1;
	if((k*(3*k-1)/2)==n)
	{
		return true;
	}
	else
	return false;
}
bool hexchk(long long int n)
{
	double h=n+0.0;
	h/=2.0;
	h=pow(h,0.5);
	unsigned long long int k=h+1;
	if((k*(2*k-1))==n)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	int t=0;
	
	//cout<<pentchk(40755)<<"\t"<<pentchk(15)<<"\t"<<hexchk(415)<<endl;
	unsigned long long int i=1;
	unsigned long long int p=0;
	for(int k=200;k<1000000;k++)
	{
	
		i=(k*((k*2)-1));
		if(pentchk(i)==true)
		{
			//cout<<"Trying Hard\t"<<i<<"\t"<<k<<endl;
			cout<<i<<endl;
			break;		
		}
		if(p>i)
		{
			cout<<"WArning\t"<<i<<"\t"<<k<<endl;
		}
		p=i;
		
		
	}
	cout<<trichk(1533776805)<<pentchk(1533776805)<<hexchk(1533776805)<<endl;
}
