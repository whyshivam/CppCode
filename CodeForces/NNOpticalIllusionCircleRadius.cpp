#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n,r;
	cin>>n>>r;

	double pi=3.141592653589793238462643383279502884 ;
	double p=sin(2*pi/n);
	double r2= r*p/(1-p);
	cout<<setprecision(10)<<r2;
}
