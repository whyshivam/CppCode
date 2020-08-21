#include<iostream>
#include<cmath>
using namespace std;
int maxpow(int n,int k)
{
	int num=k;
	int sum=-1;
	while(num>0)
	{
		num/=n;
		sum++;
	}
	return sum;
}

int main()
{
	int sum=0,n=100;
/*	int num[101];
	for(int i=0;i<=100;i++)
	{
		num[i]=0;
	}*/
	
	for(int a=2;a<=n;a++)
	{
		int mp=maxpow(a,n);
	//cout<<"\t\tmaxpower of "<<a<<"\t = "<<mp<<"\t"<<endl;
		for(int i=2;i<=n;i++)
		{
			int j=2;
			while(j<i)
			{
				if(i%j==0)
				{
					if(mp<j)	
					{
						break;
					}
					else
					{
						sum++;
						cout<<sum<<"\t"<<a<<"\t"<<i<<"\t"<<j<<endl;
					//	int nu=pow(a,j);
					//	num[nu]++;
					}
				}
					j++;
			}	
		}
	}
/*	for(int i=0;i<=100;i++)
	{
		cout<<i<<"\t"<<num[i]<<"\t\t";
			}*/
	cout<<endl<<sum;
}
