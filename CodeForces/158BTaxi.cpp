#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int count=0;
	long long int num[4]={0,0,0,0};
	for(long long int i=0;i<n;i++)
	{
		long long int s;
		cin>>s;
		num[s-1]++;
	}
	count+=num[3];
	count+=num[2];
	count+=(num[1]/2);
	if(num[2]>num[0])
	{
		//count+=(num[1]/2);
		count+=(num[1]%2);
	}
	else
	{
		num[0]-=num[2];
		count+=(num[0]/4);
		long long int k=(num[0]%4)+((num[1]%2)*2);
		if(k<=4&&k>0)
		count++;
		else if(k>4)
		count+=2;
		

	}
	cout<<count;
}
