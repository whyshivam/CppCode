#include<iostream>
#include<string>
using namespace std;
int week(string a)
{
	int b;
	if(a=="Monday")
		b=1;
	else if(a=="Tuesday")
		b=2;
	else if(a=="Wednesday")
		b=3;
	else if(a=="Thursday")
		b=4;
	else if(a=="Friday")
		b=5;
	else if(a=="Saturday")
		b=6;
	else if(a=="Sunday")
		b=7;	
	else
		b=0;
	return b;
}
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		string s,e;
		getstring(cin,s,"  ");
		cin>>e;
		int l,r;
		cin>>l,r;
		int d=week(e)-week(s);
		if(d<7)
		{
			if(d%(r-l)==0)
			{
				cout<<""
			}
		}
	}
}
