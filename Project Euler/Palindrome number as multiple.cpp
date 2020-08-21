#include<iostream>
using namespace std;
bool palno(int n)
{
	bool pr; int l=n,r=0; 
	while (l >0)
	{
		r=(l%10)+r*10;
		l=l/10;
	}
	if (r==n)
	{
		pr=1;
		
	}
	else 
	pr=0;
	return pr;
}
int main()
{int i,j,k,t=580085;
	for(i=999;i>=100;i--){
		for(j=999;j>=100;j--){
			 k=j*i;
			if (palno(k)&&k>=t){
				t=k;
			}
			
		}
		
	}
	cout<<t;
}
