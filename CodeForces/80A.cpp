#include<bits/stdc++.h>
using namespace std;
bool isPrime(int p)
{
	bool fl=true;
	for(int i=2;i*i<=p;i++)
	{
		if(p%i==0)
		{
			fl=false;
			break;
		}
	}
	return fl;
}
int main(){
	int n,m;
	cin>>n>>m;
	bool fl=isPrime(m);
	if(fl){
		for(int i=n+1;i<m;i++){
			if(isPrime(i)){
				fl=false;
				break;
			}
		}
	}
	if(fl)
	cout<<"YES";
	else
	cout<<"NO";
	
}
