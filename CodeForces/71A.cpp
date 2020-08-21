#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t)
	{
		string n;
		cin>>n;
		if(n.length()<=10)
		cout<<n<<"\n";
		else
		{
			cout<<n[0]<<(n.length()-2)<<n[n.length()-1]<<"\n";
		}
		
		
		t--;
	}
}
