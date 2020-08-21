#include<bits/stdc++.h>
using namespace std;
void print(vector<int> a,int p)
{
	for(int i=0;i<a.size();i++){
		cout<<(a[i]+p)<<" ";
	}
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
			vector<int> n1{2,4,1,3};
			vector<int> n2{3,1,5,2,4};
			vector<int> n3{3,1,5,2,6,4};
			vector<int> n4{3,1,5,7,4,2,6};
			a.push_back({2,4,1,3});
			a.push_back({3,1,5,2,4});
			a.push_back({3,1,5,2,6,4});
			a.push_back({3,1,5,7,4,2,6});
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
