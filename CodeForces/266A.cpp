#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	char k=s[0];
	int sum=0;
	for(int i=1;i<n;i++)
	{
		while(s[i]==k)
		{
			sum++;
			i++;
		}
		k=s[i];
	}
	cout<<sum;
}
