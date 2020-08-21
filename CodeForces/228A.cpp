#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	vector <int> a;
	for(int i=0;i<4;i++)
	{
		int k;
		cin>>k;
		a.push_back(k);
	}
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	cout<<(4-a.size());
}
