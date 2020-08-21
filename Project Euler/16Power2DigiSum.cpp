#include<iostream>
using namespace std;
int main()
{
	string num="1";
	int k=0;
	string number="";
	for(int i=1;i<=1000;i++)
	{
		string number="";
		k=0;
		for(int j=num.size()-1;j>=0;j--)
		{
			int re=(int)num.at(j)-48;
			re=2*re+k;
			k=re/10;
			re=re%10+48;
			char r=(char)re;
			number=r+number;
			if(j==0)
			{
				if(k==1)
				{
					number="1"+number;
				}
			}	
		}
		num=number;
		cout<<i<<"\t"<<num<<endl;
		}
	int sum=0;
	//cout<<num.size()<<endl;
	for(int i=0;i<num.size();i++)
	{
		sum+=(int)num.at(i)-48;
	}
	cout<<sum;
}
