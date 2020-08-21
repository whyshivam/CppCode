#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct Num{
	int val;
	int pos;
};
int binary_search(Num a[],int x,int l,int r){
	if(l>r){
		return -1;
	}
	if(a[l].val==x)
	return l;
	if(a[r].val==x)
	return r;
	int mid=(r+l)/2;
	if(a[mid].val==x)
	return mid;
	if(a[mid].val<x)
	return binary_search(a,x,mid+1,r);
	if(a[mid].val>x)
	return binary_search(a,x,l,mid-1);
}
bool compare(Num a, Num b)
{
	return a.val<b.val;
}

int main(){
	int n;
	cin>>n;
	Num a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].val;
		a[i].pos=i+1;
	}
	int m;
	cin>>m;
	int b;
	long long int le=0,ri=0;
	sort(a,a+n,compare);
	for(int j=0;j<m;j++)
	{
		cin>>b;
		int l=n,r=n;
		int x=binary_search(a,b,0,n-1);
		//cout<<"\t"<<x<<"\t"<<a[x].pos<<"\t"<<b<<"\t";
		if(x>=0)
		{
			int y=x;
			int i=a[x].val;
			l=a[x].pos;
			r=n-a[x].pos+1;
			if(x!=0){
				//cout<<"a";
					while((a[x-1].val==a[x].val)){
						//cout<<"b";
						l=min(a[x-1].pos,l);
						r=min((n-a[x-1].pos+1),r);
						if(x==1)
						break;
						x--;
					}
				
				x=y;
			}
			if(x!=n-1){
				//cout<<"c";
						while(a[x+1].val==a[x].val){
						//	cout<<"d";
						l=min(a[x+1].pos,l);
						r=min((n-a[x+1].pos+1),r);
						if(x==n-1)
						break;
						x++;
					}
				
			}
			//cout<<l<<" "<<r<<"\n";
			le+=l;
			ri+=r;		
		}
		else{
			le+=n;
			ri+=n;
		}
	}
	cout<<le<<" "<<ri<<"\n";
	
}
