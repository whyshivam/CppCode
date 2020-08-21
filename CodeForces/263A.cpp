#include<iostream>
using namespace std;
int mod(int n)
{
	if(n<0)
	n*=(-1);
	return n;
}
int main()
{
	int x,y;
	int a=0;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>a;
			if(a==1)
			{
				x=i;
				y=j;
			}
		}
	}
	int m=mod(x-3)+mod(y-3);
	cout<<m;
}
