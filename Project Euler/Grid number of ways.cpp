#include<iostream>
using namespace std;
int main(){
	unsigned long long int  i;unsigned long long int j=1,k=1,l=1;
	for(i=21;i<=40;i+=2){
		j*=i;
		l*=2;
		
	}
	for(i=1;i<=10;i++)
	{
		k*=i;
	}
	j=(j*l)/k;
		

	
	cout<<j;
}
