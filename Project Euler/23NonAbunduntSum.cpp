#include<iostream>
using namespace std;
int sumDiv(int n)
{
	int sum=0;
	int p=1;
	for(p=1;p<n;p++)
	{
		if(n%p==0)
		sum+=p;
		
	}
	return sum;
}
int main()
{
 
	int c=0;
	int num[6165];
	for(int n=1;n<28123;n++)
	{
		if(n-sumDiv(n)<0)
		{
			c++;
			num[c]=n;
		}
	//	else if(n>sumDiv(n))
	//	cout<<"Defecient\t"<<n<<endl;
	//	else if(n==sumDiv(n))
	//	cout<<"Proper  "<<n<<endl;
		
	}
	bool g[28124];
	for(int i=0;i<28124;i++)
	{
		g[i]=0;
	}
	for(int i=1;i<6165;i++)
	{
		for(int j=i;j+i<28124;j--)
		{
			int l=i+j;
			g[l]=1;
			cout<<l<<"\t";
		}
	}
	int sum=0;
	for(int i=0;i<28124;i++)
	{
		if(g[i]==0)
		{
			sum+=i;
		}
			
	}
	cout<<sum;
	cout<<c;
}
