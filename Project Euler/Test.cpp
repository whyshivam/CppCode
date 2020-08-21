#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[10]={1,2,4,5,1,2,3,47,89,45};
	int n=sizeof(num)/sizeof(num[0]);
	sort(num,num+n);
	for (int i=0;i<10;i++)
	{
		cout<<num[i]<<endl;
	}
}
