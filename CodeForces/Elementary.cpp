#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string k;
		cin>>k;
		int p =0;
		for(int j=0;j<k.size();j++)
		{
			
			char l=k[j];
			int lp=(int)l-64;
			cout<<lp<<",";
			if(lp%2==0)
			{
				lp=lp/2;
			}
			p=lp+p;
			
		}
		cout<<"--- "<<p<<endl;
	}
}
