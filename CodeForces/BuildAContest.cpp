#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int pro[m];
	int num[n+1][2];
	num[0][0]=1;
	num[0][1]=1;
	for(int i=1;i<=n;i++)
	{
		num[i][0]=0;
		num[i][1]=0;
	}
	string p="";
	int count=0;
	int clount=0;
	for(int i=0;i<m;i++)
	{
		cin>>pro[m];
		if(num[(pro[m])][0]==0)
		{	
		count++;	
		num[(pro[m])][0]+=1;
		}
		num[(pro[m])][1]+=1;
		if(count==n)
		{
			p+="1";
			count=0;
			for(int j=1;j<=n;j++)
			{
				num[j][1]--;
				num[j][0]=num[j][1];
				if(num[j][1]>0)
				{
					count++;
				}
				
			}
			clount++;
		}
		else
		{
			p+="0";

		}
	}
	cout<<p;
}
