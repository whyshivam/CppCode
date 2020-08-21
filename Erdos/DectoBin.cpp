#include<iostream>//work in progress
using namespace std;
#include<string>
bool pal(string n)
{ bool pr=0;
int len=n.length();
for(int i=0;i<=(len/2);i++)
{
	char l= n.at(i);
	char r=n.at(len-i-1);
	if (l==r)
	{
		pr=1;
	}
	else 
	break;
}
int main()
{
	string bin="";
	string hec="";
	string oct="";
	for(long long int n=1;n<=9999999;n++)
	{
		if(!pal(bin))
		break;
		int l=n;
		int c;
		while(l>0)
		{
			c=l%2;
			char d=(char)(c+48);
			bin=d+bin;
			l/=2;
		}
		l=n;
		bin="";
		while(l>0)
		{
			c=l%8;
			char d=(char)(c+48);
			bin=d+bin;
			l/=2;
		}
		l=n;
		while(l>0)
		{
			c=l%16;
			if(c>=10)
			c+=7;
			char d=(char)(c+48);
			bin=d+bin;
			l/=2;
		}
	
	}
	

}
