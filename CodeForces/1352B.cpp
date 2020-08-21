#include<bits/stdc++.h>
using namespace std;
vector<long int> fun(long int n,long int k){
	long int t=n;
	vector<long int > p;
	if(k%2==0){
		
		for(int i=1;i<k;i++)
		{
			t-=1;
			if(t>0)
			p.push_back((1));
			else
			{
				p.erase(p.begin(),p.end());
			}
		}
		p.push_back(t);
	}
	else
	{
		if(n%2==0)
		{
			for(int i=1;i<k;i++)
			{
				t-=2;
				if(t>0)
				p.push_back((2));
				else
				{
					p.erase(p.begin(),p.end());
				}
			}
			p.push_back(t);
		}
		else{
			for(int i=1;i<k;i++)
			{
				t-=1;
				if(t>0)
				p.push_back((1));
				else
				{
					p.erase(p.begin(),p.end());
				}
			}
			p.push_back(t);
		}
	}
	return p;
}
void print(vector<long int> &a)
{
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	cout<<"\n";
}
int main(){
	long int t;
	cin>>t;
	while(t){
			long int n;
			long int k;
			cin>>n>>k;
			if(n==k)
			{
				cout<<"YES\n";
				for(int i=0;i<k;i++)
				cout<<"1 ";
				cout<<"\n";
			}
			else if(n<k)
			{
				cout<<"NO\n";
			}
			else
			{
				if(k%2==0&&n&2!=0)
				{
					cout<<"NO\n";
				}
				else
				{
					if(k==1)
					cout<<"YES\n"<<n<<"\n";
					else
					{
						vector<long int > p ;
						p = fun(n,k);
						if(p.size()!=k)
						cout<<"NO\n";
						else
						{
							cout<<"YES\n";
							print(p);
						}
					}
				}
				
			}
		
		
		
		t--;
	}
	
}
