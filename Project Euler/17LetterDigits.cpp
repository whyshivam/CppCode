#include<iostream>
using namespace std;
int letterDigi(int n);
int main()
{
	unsigned long long int n=0;
	for(int i=1;i<=1000;i++)
	{
		cout<<i;
		n+=letterDigi(i);
		cout<<"\t"<<n<<endl;
	}
	cout<<n;
}
int letterDigi(int i)
{	
	int s=0;
	if(i<20)
	{
			switch(i)
			{
				case 1:s+=3;break;
				case 2:s+=3;break;
				case 6:s+=3;break;
				case 10:s+=3;break;
				case 4:s+=4;break;
				case 5:s+=4;break;
				case 9:s+=4;break;
				case 3:s+=5;break;
				case 7:s+=5;break;
				case 8:s+=5;break;
				case 11:s+=6;break;
				case 12: s+=6;break;
				case 15:s+=7;break;
				case 16:s+=7;break;
				case 13:s+=8;break;
				case 14:s+=8;break;
				case 18:s+=8;break;
				case 19:s+=8;break;
				case 17:s+=9;break;
				default : s+=0;
			}
		
	}
	else if(i<100)
	{
		int l=i/10;
		switch(l)
		{
			case 2:s+=3;break;
			case 3:s+=2;break;
			case 5:s+=2;break;
			case 9:s+=2;break;
			case 4:s+=1;break;
			case 6:s+=1;break;
			case 7:s+=1;break;
			case 8:s+=1;break;
			default :s+=0;
			
		}
		s+=letterDigi(i%10)+letterDigi(l);
	}
	else if(i<1000)
	{
		int p=i%100;
		int l=i/100;
		if(i%100==0)
		{
			s+=letterDigi(l)+7;
		}
		else
		{
			s+=letterDigi(p)+letterDigi(l)+10;
		} 
	}
	else if (i==1000)
	{
		s=3+8;
	}
	
	return s;
}

