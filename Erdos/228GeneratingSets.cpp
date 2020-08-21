#include<iostream>
using namespace std;
int timediv(long long int n )
{
	long long int q=998244353;
	int c=0;
	while(q>n)
	{
		c++;
		q/=n;
	}
	return c;
}
int main()
{
	long long int q=998244353;
	long long int p[998244354][2];
	for(long long int i=2;i<=998244353;i++)
	{
		p[i][0]=0;
	}
	for(long long int i=2;i<998244353;i++)
	{
		if(p[i][0]==0)
		{
			for(long long int j=2*i;j<q+1;j+=i){
				p[j][0]=1;
			}
		}
	}
	for(long long int i=2;i<=998244353;i++)
	{
		if(p[i][0]==0)
		{
			int k=timediv(i);
			for(long long int j=i;i<=998244353;j+=i)
			{
				p[j][1]=k;
			}
		}
	}
	int vv=0;
	for(long long int i=2;i<=998244353;i++)
	{
		vv+=p[i][1];
		cout<<i<<"\t"<<p[i][1]<<endl;
	}
}
