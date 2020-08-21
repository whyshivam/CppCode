#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	long long int a,b,c,n;
	for(long long int i=0;i<t;i++)
	{
		bool fl=false;
		cin>>a>>b>>c>>n;
		if((a+b+c+n)%3==0)
		{
			long long int k=(a+b+c+n)/3;
			if(k>=a&&k>=b&&k>=c)
			{
				fl=true;
			}
		}
		if(fl==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
