#include<iostream>
using namespace std;
string ntobin(int n)
{
	string jack="";
	int bin;
	while (n > 0)
    {
        bin = n % 2;
        int j=bin;
        char t=(char)(j+48);
        jack+=t;
        n /= 2;
    }
    return jack;
}
string ntostring(int n)
{
	int h=n;
	int r;
	char k;
	string ans="";
	while(h>0)
	{
		r=h%10;
		k=(char)(r+48);
		ans=k+ans;
		h/=10;
	}
	return ans;
}
bool pal(string n)
{
	int len=n.size();
	int p=len/2;
	bool flag=true;
	for(int i=0;i<=p;i++)
	{
		if(n.at(i)!=n.at(len-i-1))
		{
			flag=false;
			break;
		}
	}
	return flag;
	
}



int main()
{
	int sum=0;
	for(int i=1;i<1000000;i++)
	{
		string n1=ntobin(i);
		string n2=ntostring(i);
		if(pal(n2))
		{
			if(pal(n1))
			{
				sum+=i;
				cout<<i<<"\t"<<n1<<"\t"<<sum<<endl;
			}
		}
		}	
}
