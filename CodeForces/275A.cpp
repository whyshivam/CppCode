#include<bits/stdc++.h>
using namespace std;
int fn(int k){
	if(k<0)
	k=0;
	else if(k>=3)
	k=2;
	
	return k;
}
int rev(int fl){
	if(fl==1)
	fl=0;
	else
	fl=1;
	return fl;
}
void mod(vector<vector<int> > &b,int i,int j ){
	for(int ia=fn(i-1);ia<=fn(i+1);ia++){
			b[ia][j]=rev(b[ia][j]);
		}
	for(int ja=fn(j-1);ja<=fn(j+1);ja++){
	
			b[i][ja]=rev(b[i][ja]);
	}
	b[i][j]=rev(b[i][j]);
			
	
}
int main(){
	int a[3][3];
	vector<vector <int> > b(3);
	for(int i=0;i<3;i++)
	{
		b[i]=vector<int>(3);
		for(int j=0;j<3;j++)
		{
			b[i][j]=1 ;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			if(a[i][j]%2==1)
			{
				mod(b,i,j);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<b[i][j];
			
		}
		cout<<"\n";
	}
}
