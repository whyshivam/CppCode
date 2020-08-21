#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int prime[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};
	int c=0;
	int num[(99*49)];
	for(int i=2;i<=100;i++)
	{
		for(int j=2;j<=100;j++)
		{
			if(i==j)
			continue;
			num[c]=pow(i,j);
			c++;
			
		}
	}
	int mn=sizeof(num)/sizeof(num[0]);
	sort(num, num+mn);
	int p=num[0];
	int count =1;
	for(int i=1;i<(99*49);i++)
	{
		if(num[i]!=p)
		{
			count++;
			p=num[i];
			cout<<count<<"\t"<<num[i];
		}
		
	}
}
