#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='.')
		cout<<"0";
		else
		{
			
				if(n[i]==n[i+1])
				{
					cout<<"2";
					i++;
				}
				else
				{
					cout<<"1";
					i++;
				}
			
		}
	}
}
