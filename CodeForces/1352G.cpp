#include<bits/stdc++.h>
using namespace std;
void print(vector<int> a,int p)
{
	for(int i=0;i<a.size();i++){
		cout<<(a[i]+p)<<" ";
	}
}
void ad2vec(vector<vector<int> > &a, int b[],int n){
	vector<int> c;
	for(int i=0;i<n;i++)
	{
		c.push_back(b[i]);
	}
	a.push_back(c);
}
int main(){
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		if(n<4)
		cout<<"-1\n";
		else
		{
			vector<vector<int> > a;
			int n1[]={2,4,1,3};
			int n2[]={3,1,5,2,4};
			int n3[]={3,1,5,2,6,4};
			int n4[]={3,1,5,7,4,2,6};
			ad2vec(a,n1,4);
			ad2vec(a,n2,5);
			ad2vec(a,n3,6);
			ad2vec(a,n4,7);
			int k=n/4;
			int p=n%4;
			if(p==0)
			{
				for(int i=0;i<k;i++)
				{
					print(a[0],(4*i));
				}
			}
			else
			{
				for(int i=0;i<k-1;i++)
				{
					print(a[0],(4*i));
				}
				print(a[p],(4*(k-1)));
			}
				cout<<"\n";	
			
		}
		
		
		
		
		
		
		t--;
	}
}
