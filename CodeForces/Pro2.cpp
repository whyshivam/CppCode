#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<int> &a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}

}
void find(vector<int>&a,int k)
{
	int b[a.size()+1];
	vector<int> c;
	for(int i=0;i<=a.size();i++)
	b[i]=0;
	int max=0,d=0;
	for(int i=0;i<a.size();i++)
	{
		if(b[a[i]]==0)
		{
			d++;
			c.push_back(a[i]);
		}
			b[a[i]]++;
			if(max<b[a[i]])
			max=b[a[i]];
	}
	if(d>k)
	{
		cout<<"-1\n";
	}
	else
	{
		while(c.size()!=k)
		c.push_back(1);
		cout<<(max*c.size())<<"\n";
		while(max)
		{
			print(c);
			max--;
		}
		cout<<"\n";
	}
	
}

void func(vector<int> &a, int k)
{
	
	vector<int> d(k);
	for(int i=0;i<k;i++)	
	d[i]=a[i];

	vector<int> b;
	int c=0;
	for(int i=0;i<a.size();c++)
	{
		int m=c%k;
		if(i<k){
			b.push_back(d[m]);
		//	cout<<" \t.1>>  "<<d[m]<<"\t"<<i<<"\t"<<c<<"\n";
			i++;
		}
		else if(a[i]!=d[m])
		{
			b.push_back(d[(m)]);
		//cout<<" \t.2>>  "<<d[m]<<"\t"<<i<<"\t"<<c<<"\n";
		}
		else
		{
			b.push_back(a[i]);
			//cout<<" \t.3>>  "<<a[i]<<"\t"<<i<<"\t"<<c<<"\n";
			i++;
		}
		if(c>10000)
		{
			b.erase(b.begin(),b.end());
		}
		
	}
	/*while(c%k!=0)
	{
			b.push_back(d[c%k]);
			c++;
	}*/
	if(b.size()==0)
	cout<< "-1\n";
	else
	{
		cout<<b.size()<<"\n";
	print(b);
	}
	
	
}
int main()
{
	long long int t;
	cin>>t;
	while(t){
		int k,n;
		cin>>n>>k;
		vector<int> a(n);
		bool fl=true;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		find(a,k);
		t--;
	}
}
