#include<bits/stdc++.h>
using namespace std;
void rec(vector<int> &A, int r,int m)
{
	if(m!=0||r!=0)
	{
		
		int t=r/(m);
		if(A[m-1]>t)
		{
			A[m-1]-=t;
			r%=m;
		}
		else
		{
			
			r-=A[m-1]*m;
			A[m-1]=0;
		}
		rec(A,r,(m-1));
	}
}
int dv(int a, int b)
{

		int k=a/b;
		if(k*b!=a)
		{
			k++;
		}
	return k;
}
int cunt(vector<int> &A, int m,int p)
{
	int d=p/m;
	int count=dc(A[m-1],d);
	int r=p-(A[m-1]%d);
	rec(A,r,m-1);
}
int main()
{
	int m;
	int n;
	int p;
	cin>>m>>n>>p;
	int num[p];
	memset(num,0,num+p);
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		num[k]++;
	}
	for(int i=m;i>0;i++)
	{
		count+=cunt(num,i,p);

	}
}
