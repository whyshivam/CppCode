#include<iostream>
using namespace std;
int  main()
{
	long long int n,c1=1,c2=1;
	for(int i=1;i<10000;i++)
	{
		n=c1+c2;
		c2=c1;
		c1=n;
		if(n<0)
		{
			break;
		}
		cout<<i<<"\t"<<n<<endl;
	}
	
	
}
