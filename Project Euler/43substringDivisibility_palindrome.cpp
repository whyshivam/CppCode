#include<iostream>
using namespace std;
//789->798--->push 7with8 and rest in increasing order-->879->897-realinged in decreasing->978-->987--->push 6with7 
//7698-->realigned as 7689-->7698-->7869-->7896-->7968-->7986-->8679-->8697
bool pal(long long int n)
{
	bool num[10]={0,0,0,0,0,0,0,0,0,0};
	bool pn=true;
	for(int i=0;i<=9;i++)
	{
		int r=n%10;
		n/=10;
		if(num[r]==true)
		{
			pn=false;
			break;
		}
		num[r]=true;
	}
	for(int i=0;i<=9;i++)
	{
		if(num[i]==false)
		{
			pn=false;
			break;
		}
	}
	return pn;
}
bool chk(long long int n)
{
	int r[7];
	bool pn=1;
	long long int p[7]={17,13,11,7,5,3,2};
	for(long long int i=0;i<7;i++)
	{
		r[i]=n%1000;
	
		long long int pp=(r[i]%p[i]);
		if(pp!=0)
		{
			pn=0;
			break;
		}
		n/=10;
	}
	return pn;
}
int main()
{
	long long int n=1023456789;
	long long int sum=0;
	for(n;n<=9876543210;n++)
	{
		if(pal(n)==true)
		{
		//	cout<<"\t\t\t"<<n<<"\t\t"<<endl;
			if(chk(n)==true)
			{
				sum+=n;
				cout<<n<<"\t"<<sum<<endl;
			}
		}
	}
	
}
