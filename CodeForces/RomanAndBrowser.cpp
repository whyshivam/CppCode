#include<iostream>
#include<algorithm>
using namespace std;
int po(int n)
{
	if(n<0)
	{
		return (-n);
	}
	else
	return n;
}
int main()
{
	int k,n;
	cin>>n>>k;
	int tab[n];
	int count=0;
	int poss[k];
	for(int i=0;i<k;i++)
	{
		poss[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
		int l=i%k;
		count+=tab[i];
		poss[l]+=tab[i];
	}
	int p=sizeof(poss)/sizeof(poss[0]);
	sort(poss,poss+k);
	int e=count-poss[0];
	int s=count-poss[k-1];
	/*for(int i=0;i<k;i++)
	{
		cout<<poss[i]<<endl;
	}*/
	if(po(e)<po(s))
	{
		cout<<po(s);
	}
	else
	cout<<po(e);


}
