#include<iostream>
#include<string>
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
string mtlpstr(string a,string b)
{
	int l1=a.size();
	int l2=b.size();
	if(l2>l1)
	{
		int h=l1;
		l1=l2;
		l2=h;
		swap(a,b);
	}
	string mtlp="0";
	string mp="";

	int p[l2];
	string p2[l2];
	string p3[l2];
	p3[0]="";
	for(int i=1;i<l2;i++)
	{
		p3[i]=p3[i-1]+"0";
	
	}
	for(int i=0;i<l2;i++)
	{
		char jk=b[i];
		
		p[l2-i-1]=(int)jk;
		p[l2-i-1]=p[l2-i-1]-48;
		
	}
	for(int i=0;i<l2;i++)
	{
		int k=p[i];
		
		int carry=0;
		mp="";
		for(int j=l1-1;j>=0;j--)
		{
			if(k==0)
			{
				carry=0;
				mp="0";
				break;
			}
			char a1=a[j];
			int ai1=(int)a1-48;
			ai1=ai1*k+carry;
			if(ai1>9)
			{
				carry=ai1/10;
				ai1=ai1%10+48;
			}
			else
			{
				carry=0;
				ai1=ai1+48;
			}
			char b1=(char)ai1;
			mp=b1+mp+"";
			
		}
		carry=carry+48;
		if(carry!=48)
		{
			char b2=(char)carry;
			mp=b2+mp+"";
		}
		
		p2[i]=mp+p3[i];
	}
	for(int i=0;i<l2;i++)
	{
		mtlp=sumstr(mtlp,p2[i]);
		
	}
	int i=0;
	while(mtlp[i]=='0')
	{
		mtlp.erase(0,1);
	}
	if(mtlp.size()==0)
	{
		mtlp="0";
	}
	return mtlp;
}
string powstr(string n,int m)
{
	string ans="1";
	for(int i=0;i<m;i++)
	{
		ans=mtlpstr(ans,n);
	}
	return ans;
}
long long int sumdigi(string n)
{
	int l=n.size();
	long long int s=0;
	for(int i=0;i<l;i++)
	{
		char p=n[i];
		int k=(int)p-48;
		s+=k;
	}
	return s;
}
int main()
{
	long long int c=0;
	string i="2";
	int l=i.size();
	while(l<=2)
	{
		string pow="";
		for(int j=99;j>1;j--)
		{
			pow=powstr(i,j);
			long long int h=sumdigi(pow);
			if(h>c)
			{
				c=h;
				cout<<h<<"\t"<<i<<"\t"<<j<<"\t"<<endl;
			}
			
		}
		i=sumstr(i,"1");
	}

	cout<<c;
}
