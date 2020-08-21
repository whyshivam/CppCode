#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a[3]={0,0,0};
	for(int i=0;i<s.size();i+=2)
	{
		if(s[i]=='3')
		a[2]++;
		else if(s[i]=='2')
		a[1]++;
		else
		a[0]++;
	}
	int k=0;
	for(int i=0;i<3;i++)
	{
		int j=0;
		while(j<a[i])
		{
			cout<<(i+1);
			j++;
			if(k<s.size()/2)
			{
				cout<<"+";
				k++;
			}
		}
	}
}
