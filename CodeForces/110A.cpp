#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	cin>>num;
	int sum=0;
	for(int i=0;i<num.size();i++)
	{
		if(num[i]=='4'||num[i]=='7')
		sum++;
	}
	bool fl=true;
	if(sum==0)
	fl=false;
	while(sum>0)
	{
		if(sum%10!=4&&sum%10!=7)
		{
			fl=false;
			break;
		}
		sum/=10;
	}
	if(fl)
	cout<<"YES";
	else
	cout<<"NO";
}
