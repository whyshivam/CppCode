#include<iostream>
#include<string>
string sumstr(string n1, string n2)
{
	int l1=n1.size();
	int l2=n2.size();
	if(l1<l2)
	{
		int h=l1;
		ll=l2;
		l2=h;
		swap(n1,n2);
	
	for(int i=0;i<l1-l2;i++)
	{
		n2="0"+n2;
	}
	int carry=0;
	string sum="";
	for(int i=l-1;i>=0;i--)
	{
		char a1=n1[i],a2=n2[i];
		int ai1,ai2;
		ai1=(int)a1-48;
		ai2=(int)a2-48;
		int c=ail+ai2;
		if(c>9)
		{
			carry=1;
			c=c%10+48;
		}
		else
		{
			carry=0;
		}
		char b=(char)c;
		sum=c+sum+"";
	}
	sum=carry+sum;
	return sum;
}
using namespace std;
int main()
{
	cout<<strsum("55","45");
}
