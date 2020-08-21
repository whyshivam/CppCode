#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int p=1;
	int l[1000][2];
	for(int i=1;i<1000;i++)
	{
			p*=3;
			l[i][0]=p%10000;
			p=l[i][0];
			l[i][1]=i;			
	}
	int k= sizeof(l)/sizeof(l[0][0]);
	sort(l,l+k);
	for(int i=0;i<1000;i++)
	{
		cout<<i<<"\t"<<l[i]<<endl;
	}
}
