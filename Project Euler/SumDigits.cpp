#include<iostream>
using namespace std;
#include<string>
int main()
{
	int c=0;
	string p="39164431097436959429753831424";
	for(int i=0;i<p.size();i++)
	{
		c+=(int)p.at(i)-48;
	}
	cout<<c;
}
