#include<iostream>
using namespace std;
#include<string>

int main()
{
	string num="1";
	int multi;
	for(int i=1;i<100;i++)
	{
		int k=0;
		string number="";
		for(int j=num.size()-1;j>=0;j--)
		{
			int re=(int)num.at(j)-48;
			re=i*re+k;
			k=re/10;
			re=re%10+48;
			char r=(char)re;
			number=r+number;
			if(j==0)
			{
				if(k>0)
				{
					int l=k;
					while(l>0)
					{
						number=(char)(l%10+48)+number;
						l/=10;
					}
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
