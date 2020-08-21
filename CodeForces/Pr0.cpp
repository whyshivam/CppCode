#include<bits/stdc++.h>
#include<string>
using namespace std;
string fn(int n)
{
	string s="2";
	if(n==1)
	{
		s="-1";
	}
	else
	{
			s.insert(1,(n-1),'3');
		
	}
	return s;
}

int main() 
{ 
	int t;
	cin>>t;

	long long int k;
	for(int kl=0;kl<t;kl++)
	{
		cin>>k;
		cout<<fn(k)<<endl;
	}

	
} 

