#include<bits/stdc++.h>
#include<string>
using namespace std;
string num(int k)
{
	int c=0;
	string p="";
	if(k>0)
	{
	
		while(k>=1)
		{
			c=k%2;
			k/=2;
			c+=48;
			char l=(char)c;
			p=p+l;
		}
	}
	int l=p.size();
	if(l<6)
	{
		for(int m=0;m<6-l;m++)
		{
			p="0"+p;
		}
	}
	
	return p;
	
}
string st(char h)
{
string l=""+h;
/*	int k=(int)l;
	k-=48;*/
return l;
}
int s(char h)
{
	char l=h;
	int k=(int)l;
	k-=48;
return k;
}

int main()
{
int	 k;

	cin>>k;
string p=num(k);
cout<<p<<endl;
string k2=""+st(p.at(0))+st(p.at(5))+st(p.at(3))+st(p.at(2))+st(p.at(4))+st(p.at(1));
cout<<k2;	
}
