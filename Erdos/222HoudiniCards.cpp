#include<iostream>
using namespace std;
int main()
{
	long long int sum =0;
	int l;
	int n=1000000;
	for(int i=1;i<=1000000;i++)
	{
		l=n/i;
		sum +=l-1;
		
	}
	cout<<sum;

}
