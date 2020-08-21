#include<bits/stdc++.h>
using namespace std;
struct Game{
	long long int al;
	long long int bb;
	long long int time;
};
void Play(vector<int> &a)
{
	
	int l=1;
	int r=a.size()-1;
	long long int al=a[0],bb=0,time=1;
	long long int als=a[0],bbs=0;
	bool chc=false;
	while(l<=r)
	{
		if(chc)
		{
			int i=l;
			al=0;
			while(al<=bb)
			{
				 al+=a[i];
					//cout<< time<<" "<< al<<" "<< bb<<"\n";
				i++;
				if(i>r)
				{
					time++;
					als+=al;
				goto out;
				}
			}
			als+=al;
				 time++;
			l=i;
			chc=false;
		}
		else
		{
			int i=r;
			bb=0;
			while( al>= bb)
			{
				bb+=a[i];
				i--;
					//cout<< time<<" "<< al<<" "<< bb<<"\n";
				if(l>i)
				{
					time++;
					bbs+=bb;
					goto out;
					
				}
			}
			bbs+=bb;
				 time++;
			r=i;
			chc=true;
		}
	}
	out:
		cout<< time<<" "<< als<<" "<< bbs<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		Game candy;
		candy.al=0;
		candy.bb=0;
		candy.time=0;
		Play(a);
		
		t--;
	}
}
