#include<bits/stdc++.h>
using namespace std;
bool fig(int n,int m)
{
	int h=(n*2)/(m-2);
	h=pow(h,0.5);
	if(m<4)
	{
		h-=1;
	}
	else if(m>4)
	{
		h+=1;
	}
	h=(h*(h*(m-2)-m+4))/2;
	if(h==n)
	{
		return true;
	}
	else
	return false;
}
int hj(int n,int m)
{
	bool ty[6];
	int c=1;
	long long int sum=n;
	memset(ty,false,sizeof(ty));
	ty[m-3]=true;
	int ks=n%100;
	int ke=n/100;
	st:
	while(c<6)
	{
		for(int j=0;j<6;j++)
		{
			if(ty[j]==true)
			{
				continue;
			}
			else
			{
				for(int i=0;i<100;i++)
				{
					int nm=ks*100+i;
					if(fig(nm,(j+3))==true)
					{
						ty[j]=true;
						n+=nm;
						ks=nm%100;
						c++;
						
					}
					
				}
			}
		}
	}
	if(c==6)
	{
		if(ks!=ke)
		{
			sum=0;
		}
	}
	else
	sum=0;
	return sum;	
}
string its(int n)
{
	string k="A";
	for(int i=0;i<2;i++)
	{
		int j=n+48;
		char p=(char)j;
		k=k+j;
	}
	k=k+"B";
	for(int i=2;i<4;i++)
	{
		int j=n+48;
		char p=(char)j;
		k=k+j;
	}
	k=k+"A";
	return k;
}
string it(int n)
{
	int h=log10(n)+1;
	string k="";
	for(int i=0;i<h;i++)
	{
		int j=n+48;
		char p=(char)j;
		k=k+j;
	}
	return k;
}

int main()
{	
	//int num[(57-19)];
	int k=19;
	int h=0;
	string jk[6];
	for(int i=0;i<6;i++)
	{
		jk[i]=" ";
		for(int j=pow(2000/(i+1),0.5)+1;j<pow(20000/(i+1),0.5)+1);j++)
		{
			h=(j*(j*(i+1)-i+1))/2;
			jk[i]=jk[i]+its(h)+" ";
		}
	}
	for(int i=0;i<6;i++)
	{
		
	}
	
	/*for(int i=0;i<57-19;i++)
	{
		h=(num[i]);
		long long int p= hj(num[i],8);
		if (p>0)
		{
			cout<<p<<"\t"<<num[i]<<"\t"<<h;
			break;
		}
	}*/
}
