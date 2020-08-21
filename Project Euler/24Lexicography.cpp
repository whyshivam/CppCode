#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int in=1000000;
	long long int poi=1;

	for(int lk=1;lk<=9;lk++)
	{
		poi*=lk;
	}
	int l=9;
	int i;
	while(in>0)
	{
		i=in/poi;
		if(i<=l+1)
		{
			in-=poi*i;
			cout<<i;
			poi/=l;
			l--;
		}
		else if(in%poi==0)
		{
			for(int w=0;w<l;w++)
			{
				cout<<1;
				break;
			}
		}
		else if(i>l-1)
		{
			cout<<"ERROR : 404";
		}
	}
}
