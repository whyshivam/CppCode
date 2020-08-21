//work in progress
#include<iostream>
#include<math.h>
using namespace std;
bool pr(int n)
{
	int i = 2; int l;
	for(i;(i<sqrt(n));i++)
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
int main(){
	long p,n=600851475143;
	for(long i=n-1;i>3;i--){
		if (n%i==0&&pr(i)){
		p=i;
		break;}
	}
	n=pr(600851475143);
	cout<<p<<n;
}
