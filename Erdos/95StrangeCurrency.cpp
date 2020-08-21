#include<iostream>

using namespace std;
int main()
{
	int se[1000];
	int thi[1000];
	for (int i=0;i<1000;i++)
	{
		se[i]=7*i;
		thi[i]=13*i;
	}
	bool jk[13000];
	for(int i=0;i<13000;i++)
	{
		jk[i]=0;
	}
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			int p=se[i]+thi[j];
			if(p<13000)
			jk[p]=1;
		}
	}
	for(int i=0;i<13000;i++)
	{
		if(jk[i]==0)
		cout<<i<<endl;
	}
}
