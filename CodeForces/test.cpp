#include<bits/stdc++.h>
using namespace std;
struct Num{
	int val;
	int pos;	
};
bool compare(Num a,Num b)
{
	return (a.val<b.val);
}
int main()
{
	Num a[3];
	a[0].val=10;
	a[0].pos=0;
	a[2].val=5;
	a[2].pos=100;
	a[1].val=20;
	a[1].pos=1;
	sort(a,a+3,compare);
	cout<<a[0].val<<"\n"<<a[0].pos<<"\n"<<"\n";
	cout<<a[1].val<<"\n"<<a[1].pos<<"\n"<<"\n";
}
