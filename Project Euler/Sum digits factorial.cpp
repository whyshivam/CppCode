#include<iostream>
//this code is wrong as it ignores the other factors as well for eg 4 in 40 and special attention to 25n is ignored
using namespace std;

double remove5(int n)
{
	double d=1.0;
	int l= n;
	while(l%5==0)
	{
		l=l/5;
		d=d/2;
	}
	d*=l;
	return d;
	
}
unsigned long long int sfact(int p){
	unsigned long long int j=1;
	for(int i=1;i<=p;i++){
		j*=remove5(i);
	}
	return j;
}
int sumDigits(unsigned long long int n){
	unsigned long long int l=n;
	int sum=0;
	while (l>0){
		sum+=l%10;
		l/=10;
	}
	return sum;
}
int main(){
	int n=10;
	for(int n=1;n<=100;n++)
	{
	
	unsigned long long int p= sfact(n);
	int k=sumDigits(p);
	cout<<n<<"\t\t"<<p<<"\t\t"<<k<<endl;
}}
