#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<500;i++)
	{
		for(int j=1;j<i;j++)
		{
			if((i*j)%1000==0)
			{	int n=1000-i-j;
				if(n==500-i*j/1000)
				{
					int n=1000-i-j;
					if(n*n==(i*i+j*j))
					{
						cout<<(i*j*(1000-(i+j)))<<endl<<i<<"\t"<<(i*i)<<endl<<j<<"\t"<<(j*j)<<endl<<(1000-i-j)<<"\t"<<((1000-i-j)*(1000-i-j));
						break;
					}
				}
			}
		}
	}
}
