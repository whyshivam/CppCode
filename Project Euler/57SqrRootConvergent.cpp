#include<iostream>
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

int main()
{
	string num[2010];
	num[0]="1";
	num[1]="2";
	num[2]="3";
	num[3]="5";
	num[4]="7";
	num[5]="12";
	num[6]="17";
	num[7]="29";
	for(int i=4;i<2010;i++)
	{
		if(i%2==0)
		{
			num[i]=sumstr(num[i-1],num[i-3]);
		}
		else
		{
			num[i]=sumstr(num[i-1],num[i-2]);
		}
	}
	int count = 0;
	for(int i=1;i<=2000;i+=2)
	{
		//cout<<count<<"\t"<<i<<"\t"<<num[i]<<endl;
		if(num[i+1].size()>num[i].size())
		{
			count++;
		}
		
	}
	cout<<count<<endl;
	
}
