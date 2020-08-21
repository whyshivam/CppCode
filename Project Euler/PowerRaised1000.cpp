#include<iostream>
#include<string>
using namespace std;
void raise(string*p)
{
	string j=*p;
	if((int)j.at(0)-48>=5)
	j='0'+j;
	for(int i=j.size()-1;i>=0;i--)
		{
			int l=(int)j.at(i)-48;
			int s=0;
			int d=2*l +48 +s;
		
			if(l>5)
				{
					char dd=(char)d;
					string ddd=dd+"";
					j.replace(i,1,ddd);
					s=0;
				}
			else
				{
					d-=10;
					char dd=(char)d;
					string ddd=dd+"";
					s=1;
					j.replace(i,i,ddd);
				}
		}
	*p=j;
}
int main()
{
	string p="1";
	for(int i=1;i<=1;i++)
	{
		raise(&p);
		cout<<p<<"\t";
	}
	cout<<"\n"<<p;
}
