#include<iostream>
#include<cmath>
using namespace std;
int poe(int n,int l)
{
	
	int sum=0;
	while(l>=0)
	{
		l/=n;
		sum+=l;;
	}
	return sum;
}
int main()
{
	long long int lk=1;
	int prnum[25][2]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};
	for(int i=0;i<25;i++)
	{
		prnum[i][1]=0;
	}
	prnum[0][1]=1;
		for(int i=0;i<25;i++)
		{
			int l=poe(prnum[i][0],100);
			cout<<"\t"<<prnum[i][0]<<"\t"<<l<<endl;
			
		}
	
	for (int i=0;i<25;i++)
	{
		cout<<prnum[i][0]<<"\t"<<prnum[i][1]<<endl;
	}	
	
}
