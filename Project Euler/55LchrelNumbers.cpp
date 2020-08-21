#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string sumstr(string n1, string n2)
{
	int l1=n1.size();
	int l2=n2.size();
	if(l1<l2)
	{
		int h=l1;
		l1=l2;
		l2=h;
		swap(n1,n2);
	}
	for(int i=0;i<l1-l2;i++)
	{
		n2="0"+n2;
	}
	int carry=0;
	string sum="";
	for(int i=l1-1;i>=0;i--)
	{
		char a1=n1[i],a2=n2[i];
		int ai1,ai2;
		ai1=(int)a1-48;
		ai2=(int)a2-48;
		int c=ai1+ai2+carry;
		if(c>9)
		{
			carry=1;
			c=c%10+48;
		}
		else
		{
			carry=0;
			c=c+48;
		}
		char b1=(char)c;
		sum=b1+sum+"";
	}

	if(carry!=0)
	{
		char b2=(char)carry+48;
		sum=b2+sum+"";
	}
	int i=0;
	while(sum[i]=='0')
	{
		sum.erase(0,1);
	}
	if(sum.size()==0)
	{
		sum="0";
	}
	return sum;
}
string revstr(string n)
{
	string p="";
	for(int i=0;i<n.size();i++)
	{
		p=n[i]+p;
	}
	int i=0;
	while(p[i]=='0')
	{
		p.erase(0,1);
	}
	if(p.size()==0)
	{
		p="0";
	}
	return p;
}
bool palstr(string n)
{
	string m=revstr(n);
	if(m==n)
	{
		return true;
	}
	else
	return false;
}
bool chkly(string n)
{
	bool fl=false;
	int i=1;
	string m;
	while(i<50)
	{
		m=sumstr(n,revstr(n));
		n=m;
		if(palstr(m)==true)
		{
			fl=true;
			break;
		}
		i++;
	}
	return fl;
}

int main()
{
	int c=0;
	string n="1";
	cout<<revstr("1231")<<"\n";
	while(n!="10000")
	{
		if(chkly(n)==false)
		{
			c++;
			cout<<c<<"\t"<<n<<"\n";
		}
		n=sumstr(n,"1");
	}
	cout<<c;

}
