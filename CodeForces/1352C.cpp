#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t)
	{
		long long int n,k;
		cin>>n>>k;
		long long int p=k/(n-1);
		long an=(n*p);
		if(k%(n-1)==0)
		an-=1;
		else
		an+=(k%(n-1));
		cout<<an<<"\n";		

		
		t--;
	}
	
}
