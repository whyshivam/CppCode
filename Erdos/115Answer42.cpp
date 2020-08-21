#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i=42;
	for(int i=1;i<42;i++)
	{
		double l=42.0/i;
		int r=pow(l,i);
		cout<<i<<"\t"<<l<<"\t"<<r<<endl;
	}
}

