#include<iostream>
using namespace std;
int count(int n)
{
	int coins[8]={200,100,50,20,10,5,2,1};
	int l=n;
	int c=0;
	int k=1;
	if (n==1)
	{
		return k;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		for(int i=0;i<8;i++)
		{
			if(l==coins[i])
			{
				c=i+1;
				cout<<"c= "<<endl;
				break;
			}
		}
		for(int i=c;i<8;i++)
		{
			int h=-1;
			int rem=l%coins[i];
			l-=coins[i];
			k+=count(l);
			l
			
		}
		return k;
	}
}
int main()
{
	cout<<count(200);
}
