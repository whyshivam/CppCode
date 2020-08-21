#include<iostream>
using namespace std;
typedef long long int llint;
bool pr(llint n)
		{
			llint i = 2; llint l;
			for(i;((i*i)<n);i++)
			{
				l=n%i;
				if(n==2)
				{return 1;
				break;
				}
				if (l==0)
				{
					return 0;
					break;
				}
				else
					return 1;
			}
		}

int main()
{
	llint t = 600851475143;
	llint ot=0;
	for(llint i=2;i<600851475143;i++)
	{
	llint k=t/i;
		if((pr(k)==1)&&(t%i==0))
		{ot=k;
		break;}
	}
	cout<<ot;
}

