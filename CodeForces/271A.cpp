#include <iostream>
using namespace std;
bool dis(int n)
{
	int k[10]={0,0,0,0,0,0,0,0,0,0};
	while(n>0)
	{
		 k[(n%10)]++;
		n/=10;
	}
	bool fl=true;
	for(int i=0;i<10;i++)
	{
		if(k[i]>1)
		{
				fl=false;
			break;
		}
	}
	return fl;
}
int main()
{
	int n;
	cin>>n;
	for(int i=n+1;;i++)
	{
		if(dis(i))
		{
			cout<<i;
			break;
		}
	}
}
