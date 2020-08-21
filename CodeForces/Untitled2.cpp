#include<iostream>
using namespace std;
/*string rev(string n)
{
	int l=n.size();
	for(int i=0;i<l/2;i++)
	{
		swap(n[i],n[l-i-1]);
	}
	return n;
}*/
int main()
{
	int t;
	cin>>t;
	int num[t];
	for(int i=0;i<t;i++)
	{
		int n,x,a,b,c; 
		cin>>n>>x>>a>>b;
		c=a-b;
		if(c<0)
		c=-c;
		c+=x;
		if(c>n-1)
		c=n-1;
		num[i]=c;
	}
	for(int i=0;i<t;i++)
	{
		
		cout<<num[i]<<endl;
	}
	
}
