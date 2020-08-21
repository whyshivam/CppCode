#include<bits/stdc++.h>
using namespace std;
void change(string &s)
{
	int l=s.length();
	int j=0;
	for(int i=0;i<l;i++)
	{
		if(islower(s[i]))
		j++;
		if(2*j>=l)
		break;
	}
	if(2*j>=l)
	{
		for(int i=0;i<l;i++)
		putchar(tolower(s[i]));
	}
	else
	{
		for(int i=0;i<l;i++)
		putchar(toupper(s[i]));
	}
	
}
int main(){
	string s;
	cin>>s;
	change(s);
}

