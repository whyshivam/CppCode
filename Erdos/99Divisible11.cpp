#include<iostream>
using namespace std;
int digiSum(int n)
{
	int sum=0;
	while(n>0)
	{
		int r=n%10;
		n/=10;
		sum+=r;
	}
	return sum;
}
int main(){
	int p=0,q=0;
	for(int i=9999;i<=99999;i++)
	{
		if(digiSum(i)==41)
		{
			q++;
			if(i%11==0)
			{
				
				p++;
				cout<<p<<"\t"<<i<<"\t"<<q<<endl;
			}
		}
		
	}
	cout<<p<<"\t"<<q<<endl;
	
}
