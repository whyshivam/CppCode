//1,6,28 are there own pair . Should we count twice? If yes then 40320 else 40285
#include<iostream>
using namespace std;
int sumDiv(int n);
int main()
{
	long int s=0;
	for(int i=1;i<10001;i++)
	{
		if((i==sumDiv(sumDiv(i)))&&(i!=sumDiv(i)))
		{
			s+=i;
			
		cout<<i<<"\t"<<sumDiv(i)<<"\t"<<sumDiv(sumDiv(i))<<"\t"<<s<<endl;
		}
		
	}
	cout<<endl<<s;
}
int sumDiv(int i)
{
	int s=0;
	for(int l=2;l*l<=i;l++)
	{
		if(i%l==0)
		{
			s+=l+(i/l);
		}
		
	}
	s++;
	return s;
}

