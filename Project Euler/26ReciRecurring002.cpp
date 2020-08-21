#include<iostream>
#include<cmath>
using namespace std;
int numDigi (int n )
{
	int r=n;
	int sum=0;
	while(r)
	{
		r/=10;
		sum++;
		}	
	return sum;
}
int main()
{
	int t[1000];
	for(int i=3;i<=1000;i+=2)
	{
		int divd=pow(10,numDigi(i));
		//cout<<"\t"<<divd<<"\t";
		int p[1000];
		bool flag=1;
		int m=0;
		while(flag)
		{
			int rem=divd%i;
			p[m]=rem;
			if(rem==0)
			{
				t[i]=1;
				cout<<i<<"\t"<<t[i]<<endl;
				flag=0;
				break;
			}
			int k=0;
			while(k<m)
			{	
				if(p[m]==p[k])
				{
					t[i]=m-k;
					cout<<i<<"\t\t"<<t[i]<<endl;
					flag=0;
					break;
				}
				k++;
			}
			
			divd= rem*10;
			m++;	
		}
		g: ;
	}
}
