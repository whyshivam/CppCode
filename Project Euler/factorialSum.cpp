#include<iostream>
using namespace std;
typedef unsigned long long int llnt;
int main()
{
	llnt n=1;
	for(int i=1;i<100;i++)
	{
		if(i%10==0)
		{
			
		continue;
		}
		if(i%5==0)
		{
			n/=2;
			continue;	
		}
		n*=i;
		cout<<i<<"\t"<<n<<"\n";
		
	}
	cout<<n;
}
