#include<bits/stdc++.h>
using namespace std;
int biS(string arr, int p, int r, char num) {
	if(p<=r)
	{
		string n=arr.substr(p,(r-p));
		
	 	size_t found = n.find(num); 
	    if (found != string::npos) 
	        return (p+found);
	}
	return -1;
}
int ty(string n,int l,int r)
{
	int c,d,c1,i;
	c=biS(n,l,r,'R');
	if(c>0)
	{
		int i=0;
		d=c-l;
		bool fl=true;
		while(c+i-1>=r)
		{
			c1=biS(n,l+i,c+i-1,'R');
			if(c1<0)
			{
				c1=ty(n,c+1,r);
				fl=false;
				break;
			}
			i+=d;
		}
		if(fl==true)
		{
			return ty(n,l,c-1);
		}
	}
	return r+1;
}


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string n;
		cin>>n;
		
		int c=n,l=0,l1,r=n-1,r1,ans=(n.size()+1);
		while(c>0)
		{
			l1=biS(n,l,c-1,'R');
			r1=bis(n,c+1,r,'R');
			if(l1>0&&r1>0)
			{
				typ
			}
			if(l1>0)
			l=l1;
			if(r1>0)
			r=r1;
			
		}
		
	}
	
}
