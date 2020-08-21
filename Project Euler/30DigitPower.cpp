#include<iostream>
using namespace std;
#include<cmath>
long long int pow5(long long int n)
{
	long long int k=n, sum=0;
	while(k)
	{
		int e=k%10;
		k/=10;
		sum+=pow(e,5);
		
	}
	return sum;
 } 
 int main()
 {
 	long long int a=pow(9,5);
	 long long int b=a*9*9;
	long long int sum=0;
	
	 for(long long int i=2;;i++)
	 {
	 	if(pow5(i)==i)
	 	{
	 		sum+=i;
	 		cout<<sum<<"\t"<<i<<endl;
		 }
	 	
	 	
	 }
	  }
