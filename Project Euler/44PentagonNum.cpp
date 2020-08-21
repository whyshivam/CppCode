#include<iostream>
#include<math.h>
using namespace std;
bool chk(int n)
{
	double h=0.0+n;
	h=h*2/3.0;

	h=(pow(h,0.5));
	int k=h+1;
	if((k*(3*k-1)/2)==n)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	int pfun[100000];
	
	cout<<chk(22)<<endl<<chk(35)<<endl;
	for(int i=0;i<=100000;i++)
	{
		pfun[i]=i*(3*i-1)/2;
	}
	for(int i=1;i<100000;i++)
	{
		for(int j=i+1;j<100000;j++)
		{
			int k=pfun[j]+pfun[i];
			if(chk(k)==true)
			{
			//	cout<<"\tWorking hard"<<k<<"\t"<<i<<"\t"<<j<<endl;
				k=pfun[j]-pfun[i];
				if(chk(k)==true)
				{
					cout<<k<<"\t"<<i<<"\t"<<j<<endl;
					goto death;
				}
			}
		}
	}
	death:;
}
