#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fun(char c)
{
	int k=(int)c;
	char p='0';
	k-=p;
	return k;
}

int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n)
	{
		string num;
		cin>>num;
		int l=num.size();
		long int ad=0;
		for(int i=0;i<l;i++)
		{
			if(num[i]!='0')
			ad++;
		}
		cout<<ad<<"\n";
		for(int i=0;i<l;i++)
		{
			int k=fun(num[i]);
			if(k!=0)
			{
				k*=pow(10,(l-i-1));
				cout<<k<<" ";
				
			}
		}
		cout<<"\n";
	n--;
	}
}
