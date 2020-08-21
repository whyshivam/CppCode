#include<iostream>
using namespace std;
int main()
{
	string p;
	cin>>p;
	int l=1;
	int prev=p[0]-'0';
	
	//int num[];
	//num[l]=1
	for(int i=1;i<p.size();i++)
	{
		if((p[i]-'0')==prev)
		{
			//num[l]++;
			prev=p[i]-'0';
		}
		else
		{
			l++;
			prev=p[i]-'0';
		//	num[l]=1;
		}
	}
	int num[l+1];
	l=1;
	num[l]=1;
	for(int i=1;i<p.size();i++)
	{
		if((p[i]-'0')==prev)
		{
			num[l]++;
		
		}
		else
		{
			l++;
			num[l]=1;
		}
		prev=p[i]-'0';
	}
	for(int i=1;i<=l;i++)
	{
		cout<<i<<"\t"<<p[i]<<endl;
	}
	cout<<l;
}
