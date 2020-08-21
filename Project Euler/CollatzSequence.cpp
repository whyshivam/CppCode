#include<iostream>
using namespace std;
long long int collatz(long long int n)
{
	if(n%2==0){
		return (n/2);
		
	}
	else 
	return (3*n+1);
}
int countColl(long long int n)
{
	bool flag= true;
	int count =0;
	long long int l=n;
	while(flag)
	{	
		count++;
		if(l==1)
		break;
		l=collatz(l);
		
	}
	return count;
	
}
int main()
{	int k=1;long long int p=0;
	for(long long int i=800000;i<=900000;i++)
	{
		int l=countColl(i);
		cout<<i<<"\t"<<l<<endl;	
		if(k<l)
		{p=i;
		k=l;}	}
	cout<<p;
}
