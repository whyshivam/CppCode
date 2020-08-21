#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int su(int n1,int n2,int n3,int n4,int n5, int n6)
{
	int k=n1+n2+n3+n4+n5+n6;
	cout<<k<<"\t"<<n1<<"\t"<<n2<<"\t"<<n3<<"\t"<<n4<<"\t"<<n5<<"\t"<<n6<<endl;
	return k;
}
bool cycl(int n1,int n2,int n3,int n4,int n5, int n6)
{
	int num[6]={n1,n2,n3,n4,n5,n6};
	int n[100];
	memset(n,0,sizeof(n));
	for(int i=0;i<6;i++)
	{
		int k1=num[i]/100;
		int k2=num[i]%100;
		n[k1]++;
		n[k2]++;
	}
	bool fl=true;
	for(int i=0;i<100;i++)
	{
		if(n[i]!=0)
		{
			if(n[i]%2!=0)
			{
				fl=false;
				break;
			}
		}
	}
	return fl;
}
int main()
{
	int num[6];
	for(int i=1;i<=6;i++)
	{
		num[i]=(pow(2*9999/i,0.5)-pow(2*1000/i,0.5));
	}
	int fignum[num[0]][6];
	for(int c=0;c<6;c++)
	{
		for(int i=0;i<num[i];i++)
		{
			int j=i+pow(2*1000/c,0.5);
			fignum[i][c]=(j*(j*(c+1)+1-(c)));
		}
	}
	int count=0;
	for(int i0=0;i0<num[0];i0++)
	{
		for(int i1=0;i1<num[1];i1++)
		{
			for(int i2=0;i2<num[2];i2++)
			{
				for(int i3=0;i3<num[3];i3++)
				{
					for(int i4=0;i4<num[4];i4++)
					{
						for(int i5=0;i5<num[5];i5++)
						{
							if(i5%10==0)
							{
								cout<<"working"<<"\t"<<i5<<endl;
							}
							if(cycl((fignum[i5][5]),fignum[i4][4],fignum[i3][3],fignum[i2][2],fignum[i1][1],fignum[i0][0])==true)
							{
								count=su((fignum[i5][5]),fignum[i4][4],fignum[i3][3],fignum[i2][2],fignum[i1][1],fignum[i0][0]);
								cout<<count<<endl;
								break;
							}
						}
					}
				}
			}
		}
	}
	
	
	
}
