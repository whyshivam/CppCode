#include<iostream>
#include<string.h>
using namespace std;
 int main()
{

	long int binnum=1101 ,rem, quot;
	int i=1, j, temp;
	char hexdecnum[100];
	string p;

	quot = binnum;
	while(quot!=0)
	{
		temp = quot % 16;
		// To convert integer into character
		if( temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdecnum[i++]= temp;
		quot = quot / 16;
	}

	for(j=i-1 ;j>0;j--)
	{
		p+=hexdecnum[j];
	}
cout<<p;
}


