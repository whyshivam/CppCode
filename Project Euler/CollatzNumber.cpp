#include<iostream>
using namespace std;
int coll(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n%2==0)
	{
		return 2*n
		}
		else 
		{
			return (3*n+1);
			}	
}
int vcoll(int n)
{
 	int t=n;
 	int c=1;
 	while(t!=1)
 	{
 		c++;
 		t=coll(t);
	 }
	 return n;
}
int main()
{
	int num[1000001];
	for(int i=0;i<1000001;i++)
	{
		num[i]=0;
	}
	for(int i=1;i<1000001;i++)
	{
		int s=0;
		int c=0;
		int ev=i;
		while(ev!=1)
		{
			c++;
			ev=coll(ev);
			if(num[ev])
			{
				num[i]+=num[ev]+c;
				break;
			}
			else
		}
	}
	
}
